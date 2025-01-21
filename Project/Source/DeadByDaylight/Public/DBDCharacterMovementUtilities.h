#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDCharacterMovementUtilities.generated.h"

class UCurveFloat;
class ACharacter;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDCharacterMovementUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void Local_RemoveMaxSpeedMultiplierCurve(ACharacter* character, const UCurveFloat* curveToReset);

	UFUNCTION(BlueprintCallable)
	static void Local_AddMaxSpeedMultiplierCurve(ACharacter* character, const UCurveFloat* curve, float duration, bool autoReset);

public:
	UDBDCharacterMovementUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDCharacterMovementUtilities) { return 0; }
