#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WiggleFreeComponent.generated.h"

class ASlasherPlayer;
class ADBDPlayer;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UWiggleFreeComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ASlasherPlayer* _killerWigglingFrom;

private:
	UFUNCTION()
	void Authority_OnWiggleEnd();

	UFUNCTION()
	void Authority_OnPlayerPickedUpEnd(ADBDPlayer* picker);

	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

	UFUNCTION()
	void Authority_OnChargeableCompleteEvent(bool completed, const TArray<AActor*>& instigatorsForCompletion);

public:
	UWiggleFreeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWiggleFreeComponent) { return 0; }
