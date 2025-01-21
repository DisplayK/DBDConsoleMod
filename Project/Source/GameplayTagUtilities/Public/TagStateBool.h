#pragma once

#include "CoreMinimal.h"
#include "TagStateBool.generated.h"

USTRUCT(BlueprintType)
struct FTagStateBool
{
	GENERATED_BODY()

private:
	UPROPERTY()
	bool _isTrue;

public:
	GAMEPLAYTAGUTILITIES_API FTagStateBool();
};

FORCEINLINE uint32 GetTypeHash(const FTagStateBool) { return 0; }
