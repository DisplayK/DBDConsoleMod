#pragma once

#include "CoreMinimal.h"
#include "TaggedAnimSequence.h"
#include "AnimSequenceSelector.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAnimSequenceSelector
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	UAnimSequence* _selected;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TArray<FTaggedAnimSequence> _taggedSequences;

public:
	ANIMATIONUTILITIES_API FAnimSequenceSelector();
};

FORCEINLINE uint32 GetTypeHash(const FAnimSequenceSelector) { return 0; }
