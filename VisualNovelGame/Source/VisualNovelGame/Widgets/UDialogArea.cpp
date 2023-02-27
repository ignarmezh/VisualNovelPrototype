#include "UDialogArea.h"

#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "VisualNovelGame/Enums/ENamePosition.h"

void UDialogArea::SetData(const FDialogueInfo* DialogInfo)
{
	ClearUI();
	
	CharacterNameText->SetJustification(DialogInfo->NamePosition == ENamePosition::Left ? ETextJustify::Left : ETextJustify::Right);
	CharacterNameText->SetText(DialogInfo->PersonName);
	DialogueText->SetText(DialogInfo->DialogText);
}

void UDialogArea::ClearUI()
{
	CharacterNameText->SetText(FText::FromString(""));
	DialogueText->SetText(FText::FromString(""));
}
