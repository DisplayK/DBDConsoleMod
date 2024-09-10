#pragma once

#include "CoreMinimal.h"
#include "ETestBuildType.generated.h"

UENUM(BlueprintType)
enum class ETestBuildType : uint8
{
	None,
	PublicTestBuild,
	PaxBuild,
	ConsolePreAlphaBuild,
};
