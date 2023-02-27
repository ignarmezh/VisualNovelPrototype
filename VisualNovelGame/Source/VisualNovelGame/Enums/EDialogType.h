#pragma once

#include "EDialogType.generated.h"

UENUM(BlueprintType)
enum class EDialogType: uint8
{
	Direct,
	Choices,
	Custom,
};