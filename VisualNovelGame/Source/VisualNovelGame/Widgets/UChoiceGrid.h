#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UChoiceGrid.generated.h"

UCLASS()
class VISUALNOVELGAME_API UChoiceGrid: public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UUniformGridPanel* GridPanel;
};
