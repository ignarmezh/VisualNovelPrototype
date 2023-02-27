#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VisualNovelGame/Structs/FDialogueInfo.h"
#include "UDialogArea.generated.h"

UCLASS()
class VISUALNOVELGAME_API UDialogArea: public UUserWidget
{
	GENERATED_BODY()
	
public:
	void SetData(const FDialogueInfo* DialogInfo);

private:
	void ClearUI();
	
public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* ContinueButton;
	
protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UBorder* DialogBorder;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* CharacterNameText;
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* DialogueText;
	
};
