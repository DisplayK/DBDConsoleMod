#pragma once

#include "CoreMinimal.h"
#include "ETileVariation.h"
#include "UObject/SoftObjectPtr.h"
#include "ActorVariationElements.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorVariationElements
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETileVariation Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> Element;

public:
	DEADBYDAYLIGHT_API FActorVariationElements();
};

FORCEINLINE uint32 GetTypeHash(const FActorVariationElements) { return 0; }
