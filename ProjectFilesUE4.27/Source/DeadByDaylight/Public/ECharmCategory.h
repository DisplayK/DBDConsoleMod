#pragma once

#include "CoreMinimal.h"
#include "ECharmCategory.generated.h"

UENUM(BlueprintType)
enum class ECharmCategory : uint8
{
	None,
	Small,
	Medium,
	Big,
	Short,
	Wide,
	Chibi,
	Square,
	Tablet,
	Perk,
};
