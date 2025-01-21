#pragma once

#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.h"
#include "MontageStopDefinition.generated.h"

USTRUCT(BlueprintType)
struct FMontageStopDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FAnimationMontageDescriptor Descriptor;

	UPROPERTY(Transient)
	float BlendOutTime;

public:
	ANIMATIONUTILITIES_API FMontageStopDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FMontageStopDefinition) { return 0; }
