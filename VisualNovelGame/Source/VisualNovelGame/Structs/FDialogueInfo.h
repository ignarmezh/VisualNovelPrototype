#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VisualNovelGame/Enums/ENamePosition.h"
#include "VisualNovelGame/Enums/EDialogType.h"
#include "FChoiceInfo.h"
#include "FDialogueInfo.generated.h"

USTRUCT(BlueprintType)
struct FDialogueInfo : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	EDialogType DialogType;
	
	UPROPERTY(EditAnywhere)
	FText PersonName;

	UPROPERTY(EditAnywhere)
	FText DialogText;

	UPROPERTY(EditAnywhere)
	ENamePosition NamePosition = ENamePosition::Left;
	
	UPROPERTY(EditAnywhere, meta=(EditCondition = "DialogType == EDialogType::Choices"))
	TArray<FChoiceInfo> Choices;

	UPROPERTY(EditAnywhere, meta=(EditCondition = "DialogType == EDialogType::Custom"))
	int32 NextRow;
};
