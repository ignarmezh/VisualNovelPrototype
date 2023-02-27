#include "UDialogWidget.h"

#include "UChoiceButton.h"
#include "UChoiceGrid.h"
#include "UDialogArea.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/UniformGridPanel.h"
#include "Components/UniformGridSlot.h"

void UDialogWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	if(DialogArea && DialogArea->ContinueButton)
	{
		DialogArea->ContinueButton->OnClicked.AddDynamic(this, &ThisClass::ShowNextDialogOrChoices);	
	}
	
	DialogCurrentIndex++;
	ShowNewDialogArea(DialogCurrentIndex);
}

void UDialogWidget::NativeDestruct()
{
	if(IsValid(DialogArea) && IsValid(DialogArea->ContinueButton))
	{
		DialogArea->ContinueButton->OnClicked.RemoveDynamic(this, &ThisClass::ShowNextDialogOrChoices);
	}
}

FDialogueInfo* UDialogWidget::GetDataTableInfo(const FName RowName) const
{
	FDialogueInfo* DialogueInfo = DTDialogueInfo->FindRow<FDialogueInfo>(RowName, "");
	return DialogueInfo;
}


void UDialogWidget::ShowNewDialogArea(const int32 Index)
{
	DialogCurrentIndex = Index;
	CurrentDialogInfo = GetDataTableInfo(FName(FString::FromInt(Index)));
	DialogArea->SetData(CurrentDialogInfo);
}

void UDialogWidget::ShowChoices()
{		
	ChoiceGrid->GridPanel->ClearChildren();
	for (int32 i = 0; i < CurrentDialogInfo->Choices.Num(); i++)
	{
		UChoiceButton* NewButton = CreateWidget<UChoiceButton>(this, ChoiceButton);
		NewButton->SetButtonInfo(CurrentDialogInfo->Choices[i]);
		NewButton->OnSelectorButtonClicked.AddDynamic(this, &ThisClass::ChoiceSelected);

		const auto UniformGridSlot = ChoiceGrid->GridPanel->AddChildToUniformGrid(NewButton, i, 0);
		UniformGridSlot->SetHorizontalAlignment(HAlign_Fill);
		UniformGridSlot->SetVerticalAlignment(VAlign_Fill);
	}
}

void UDialogWidget::OnFadeOutFinished()
{
	switch (CurrentDialogInfo->DialogType) {
		case EDialogType::Direct:
			ShowNewDialogArea(DialogCurrentIndex + 1);
			break;
		case EDialogType::Custom:
			ShowNewDialogArea(CurrentDialogInfo->NextRow);
			break;
		default:
			ShowNewDialogArea(DialogCurrentIndex + 1);
	}
	
}

void UDialogWidget::ShowNextDialogOrChoices()
{
	switch (CurrentDialogInfo->DialogType) {
		case EDialogType::Direct:
			PlayAnimation(TransitionDialogToDialog);
			break;
		case EDialogType::Choices:
			PlayAnimation(TransitionDialogToChoices);
			ShowChoices();
			break;
		case EDialogType::Custom:
			PlayAnimation(TransitionDialogToDialog);
			break;
		default:
			PlayAnimation(TransitionDialogToDialog);
	}
}

void UDialogWidget::ChoiceSelected(const int32 SelectedIndex)
{
	if(DialogCurrentIndex != SelectedIndex)
	{
		DialogCurrentIndex = SelectedIndex;
	}

	ShowNewDialogArea(DialogCurrentIndex);
	PlayAnimation(TransitionChoicesToDialog);
}
