#pragma once

#include "CoreMinimal.h"
#include "FootStep.generated.h"

class UDecalComponent;

USTRUCT(BlueprintType)
struct FFootStep
{
	GENERATED_BODY()

public:
	UPROPERTY(Export)
	UDecalComponent* Decal;

public:
	DEADBYDAYLIGHT_API FFootStep();
};

FORCEINLINE uint32 GetTypeHash(const FFootStep) { return 0; }
