#pragma once

#include "CoreMinimal.h"
#include "PerspectiveEffectActivationEvent.h"
#include "EPerspectiveActivationCondition.h"
#include "PerspectiveEffectData.generated.h"

USTRUCT(BlueprintType)
struct FPerspectiveEffectData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	bool WantsActive;

	UPROPERTY(BlueprintReadWrite)
	FPerspectiveEffectActivationEvent ActivationEvent;

	UPROPERTY(BlueprintReadWrite)
	EPerspectiveActivationCondition Condition;

public:
	DEADBYDAYLIGHT_API FPerspectiveEffectData();
};

FORCEINLINE uint32 GetTypeHash(const FPerspectiveEffectData) { return 0; }
