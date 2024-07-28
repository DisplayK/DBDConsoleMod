#pragma once

#include "CoreMinimal.h"
#include "EDitherType.generated.h"

UENUM(BlueprintType)
enum class EDitherType : uint8
{
	NoDither,
	FloydSteinberg,
	JarvisJudiceNinke,
	Sierra,
};
