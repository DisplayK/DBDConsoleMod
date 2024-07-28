#pragma once

#include "CoreMinimal.h"
#include "RevealOptions.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRevealOptions
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsUnaffectedByBlindness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsOutlineAlwaysVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsUnaffectedByFadeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* ActorToTestRangeFrom;

public:
	DEADBYDAYLIGHT_API FRevealOptions();
};

FORCEINLINE uint32 GetTypeHash(const FRevealOptions) { return 0; }
