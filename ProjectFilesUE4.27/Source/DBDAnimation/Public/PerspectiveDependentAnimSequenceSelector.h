#pragma once

#include "CoreMinimal.h"
#include "PerspectiveDependentAnimSequenceSelector.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FPerspectiveDependentAnimSequenceSelector
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	UAnimSequence* _current;

private:
	UPROPERTY(EditDefaultsOnly)
	UAnimSequence* _thirdPerson;

	UPROPERTY(EditDefaultsOnly)
	UAnimSequence* _firstPerson;

public:
	DBDANIMATION_API FPerspectiveDependentAnimSequenceSelector();
};

FORCEINLINE uint32 GetTypeHash(const FPerspectiveDependentAnimSequenceSelector) { return 0; }
