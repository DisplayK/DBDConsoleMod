#pragma once

#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.h"
#include "MontagePlaybackDefinition.generated.h"

USTRUCT(BlueprintType)
struct FMontagePlaybackDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FAnimationMontageDescriptor Descriptor;

	UPROPERTY(BlueprintReadOnly)
	float PlayRate;

	UPROPERTY(BlueprintReadOnly)
	bool Follower;

public:
	ANIMATIONUTILITIES_API FMontagePlaybackDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FMontagePlaybackDefinition) { return 0; }
