#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "VisualNovelGame/Structs/FDialogueInfo.h"
#include "UDialogWidget.generated.h"

UCLASS()
class VISUALNOVELGAME_API UDialogWidget: public UUserWidget
{
	GENERATED_BODY()
	
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	
	UFUNCTION()
	void ShowNextDialogOrChoices();
	UFUNCTION()
	void ChoiceSelected(int32 SelectedIndex);

protected:
	FDialogueInfo* GetDataTableInfo(FName RowName) const;
	void ShowNewDialogArea(int32 Index);
	void ShowChoices();

	UFUNCTION(BlueprintCallable)
	void OnFadeOutFinished();

protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* BackgroundImage;
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* BackgroundAlpha;
	
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UChoiceGrid* ChoiceGrid;
	
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	class UDialogArea* DialogArea;

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* TransitionDialogToDialog;
	
	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* TransitionDialogToChoices;

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* TransitionChoicesToDialog;
		
	UPROPERTY(EditAnywhere)
	class UDataTable* DTDialogueInfo;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> ChoiceButton;

private:
	int32 DialogCurrentIndex = 0;
	FDialogueInfo* CurrentDialogInfo;
};
