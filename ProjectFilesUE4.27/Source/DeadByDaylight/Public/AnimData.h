#pragma once

#include "CoreMinimal.h"
#include "ECharacterStance.h"
#include "AnimData.generated.h"

USTRUCT(BlueprintType)
struct FAnimData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterStance Stance;

public:
	DEADBYDAYLIGHT_API FAnimData();
};

FORCEINLINE uint32 GetTypeHash(const FAnimData) { return 0; }
