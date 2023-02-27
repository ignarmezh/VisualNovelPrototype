#include "UChoiceButton.h"

#include "Components/TextBlock.h"

void UChoiceButton::NativeConstruct()
{
	ChoiceButton->OnClicked.AddDynamic(this, &ThisClass::OnButtonClicked);
}

void UChoiceButton::SetButtonInfo(FChoiceInfo ChoiceInfo)
{
	SelectedIndex = ChoiceInfo.Index;
	ChoiceText->SetText(ChoiceInfo.Text);
}

void UChoiceButton::OnButtonClicked()
{
	OnSelectorButtonClicked.Broadcast(SelectedIndex);
}
