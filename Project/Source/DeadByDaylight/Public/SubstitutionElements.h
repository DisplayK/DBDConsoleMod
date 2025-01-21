#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "SubstitutionElements.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSubstitutionElements
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TSoftClassPtr<AActor> _elementToReplace;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<AActor> _elementToReplaceWith;

public:
	DEADBYDAYLIGHT_API FSubstitutionElements();
};

FORCEINLINE uint32 GetTypeHash(const FSubstitutionElements) { return 0; }
