#pragma once

#include "CoreMinimal.h"
#include "FChoiceInfo.generated.h"

USTRUCT(BlueprintType)
struct FChoiceInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Index;
};
