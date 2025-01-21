#pragma once

#include "CoreMinimal.h"
#include "BlinkParams.h"
#include "Engine/EngineTypes.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "BlinkPlayerComponent.generated.h"

class ACharacter;
class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _maxBlinkDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minBlinkDuration;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _blinkFOVCurve;

private:
	UFUNCTION(Server, Reliable)
	void Server_StartBlink(const FBlinkParams& params);

	UFUNCTION(Server, Reliable)
	void Server_EndBlink();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StartBlink(const FBlinkParams& params);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_EndBlink();

	UFUNCTION()
	void Local_OnMovementModeChanged(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode);

public:
	UBlinkPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkPlayerComponent) { return 0; }
