#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayerMovementUtilities.generated.h"

class UCurveFloat;
class ADBDPlayer;

UCLASS(BlueprintType)
class DBDGAMEPLAY_API UPlayerMovementUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void Local_SetGamepadYawCurve(ADBDPlayer* player, UCurveFloat* curve);

	UFUNCTION(BlueprintCallable)
	static void Local_SetGamepadPitchCurve(ADBDPlayer* player, UCurveFloat* curve);

	UFUNCTION(BlueprintCallable)
	static void Local_ResetRotationScale(ADBDPlayer* player, const float adjustmentTime);

	UFUNCTION(BlueprintCallable)
	static void Local_ResetGamepadLookCurves(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	static void Local_ApplyYawScaleMultiplier(ADBDPlayer* player, const float multiplier, const float adjustmentTime);

	UFUNCTION(BlueprintCallable)
	static void Local_ApplyRotationScaleMultiplier(ADBDPlayer* player, const float multiplier, const float adjustmentTime);

	UFUNCTION(BlueprintCallable)
	static void Local_ApplyPitchScaleMultiplier(ADBDPlayer* player, const float multiplier, const float adjustmentTime);

	UFUNCTION(BlueprintCallable)
	static void Local_ApplyMouseYawScaleMultiplier(ADBDPlayer* player, const float multiplier, const float adjustmentTime);

	UFUNCTION(BlueprintCallable)
	static void Local_ApplyMousePitchScaleMultiplier(ADBDPlayer* player, const float multiplier, const float adjustmentTime);

	UFUNCTION(BlueprintCallable)
	static void Local_ApplyGamepadYawScaleMultiplier(ADBDPlayer* player, const float multiplier, const float adjustmentTime);

	UFUNCTION(BlueprintCallable)
	static void Local_ApplyGamepadPitchScaleMultiplier(ADBDPlayer* player, const float multiplier, const float adjustmentTime);

public:
	UPlayerMovementUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerMovementUtilities) { return 0; }
