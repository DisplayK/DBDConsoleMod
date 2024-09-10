#pragma once

#include "CoreMinimal.h"
#include "DBDCharacterMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "ECamperDamageState.h"
#include "CamperMovementComponent.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperMovementComponent : public UDBDCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxCrawlSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRunSpeed;

protected:
	UPROPERTY(Transient)
	FRotator _defaultRotationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _rotationRateWhileCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _dropStaggerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _dropStaggerMaxSpeed;

public:
	UFUNCTION()
	void OnCamperHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

	UFUNCTION(BlueprintPure)
	FRotator GetRotationRateWhileCrawling() const;

	UFUNCTION(BlueprintPure)
	float GetDropStaggerTimeLeft() const;

	UFUNCTION(BlueprintPure)
	FRotator GetDefaultRotationRate() const;

private:
	UFUNCTION(Exec)
	void DBD_SurvivorMaxSpeedMultiplier(const float maxSpeedMultiplier);

	UFUNCTION(Exec)
	void DBD_SimulateHack_LocalSurvivorMaxSpeedMultiplier(const float maxSpeedMultiplier);

	UFUNCTION(Client, Reliable)
	void Client_Debug_SetSurvivorMaxSpeedMultiplier(const float maxSpeedMultiplier);

public:
	UCamperMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperMovementComponent) { return 0; }
