#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "VisualNovelGame/Structs/FChoiceInfo.h"
#include "UChoiceButton.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectorButtonClicked, int32, SelectedIndex);

UCLASS()
class VISUALNOVELGAME_API UChoiceButton: public UUserWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
public:
	void SetButtonInfo(FChoiceInfo ChoiceInfo);
	UFUNCTION()
	void OnButtonClicked();

public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* ChoiceButton;
	
	UPROPERTY(BlueprintAssignable)
	FOnSelectorButtonClicked OnSelectorButtonClicked;
	
protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* ChoiceText;


private:
	int32 SelectedIndex = -1;
};
