#pragma once

#include "CoreMinimal.h"
#include "NativeBlockIndicatorData.generated.h"

class UCurveFloat;
class UActorComponent;

USTRUCT(BlueprintType)
struct FNativeBlockIndicatorData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	bool IsBlockActive;

	UPROPERTY(BlueprintReadWrite)
	bool IsBlockUpdating;

	UPROPERTY(BlueprintReadWrite)
	float CurrentBlockFade;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UCurveFloat* FadeCurve;

	UPROPERTY(BlueprintReadWrite, Export)
	UActorComponent* BlockIndicator;

public:
	DEADBYDAYLIGHT_API FNativeBlockIndicatorData();
};

FORCEINLINE uint32 GetTypeHash(const FNativeBlockIndicatorData) { return 0; }
