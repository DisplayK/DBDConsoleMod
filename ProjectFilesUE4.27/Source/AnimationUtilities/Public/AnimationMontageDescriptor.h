#pragma once

#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FAnimationMontageDescriptor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName MontageID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Tags;

public:
	ANIMATIONUTILITIES_API FAnimationMontageDescriptor();
};

FORCEINLINE uint32 GetTypeHash(const FAnimationMontageDescriptor) { return 0; }
