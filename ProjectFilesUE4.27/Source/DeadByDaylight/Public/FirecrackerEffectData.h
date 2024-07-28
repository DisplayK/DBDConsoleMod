#pragma once

#include "CoreMinimal.h"
#include "FirecrackerEffectData.generated.h"

class AFirecracker;

USTRUCT(BlueprintType)
struct FFirecrackerEffectData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AFirecracker* Firecracker;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsInRange;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsFirstTime;

public:
	DEADBYDAYLIGHT_API FFirecrackerEffectData();
};

FORCEINLINE uint32 GetTypeHash(const FFirecrackerEffectData) { return 0; }
