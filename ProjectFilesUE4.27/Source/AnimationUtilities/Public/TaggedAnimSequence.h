#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TaggedAnimSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FTaggedAnimSequence
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UAnimSequence* Sequence;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FGameplayTagContainer Tags;

public:
	ANIMATIONUTILITIES_API FTaggedAnimSequence();
};

FORCEINLINE uint32 GetTypeHash(const FTaggedAnimSequence) { return 0; }
