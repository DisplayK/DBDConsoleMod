#pragma once

#include "CoreMinimal.h"
#include "HideInSnowmanInteraction.h"
#include "ECamperDamageState.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "SurvivorHideInSnowmanInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USurvivorHideInSnowmanInteraction : public UHideInSnowmanInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated, Transient)
	bool _shouldRunOutOfSnowman;

	UPROPERTY(Replicated, Transient)
	bool _isSnowmanShieldDamaged;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _nonDamagingSnowmanDestroyingEvents;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _minimumTimeToRunAndExit;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _cameraZoomBack;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _timeToZoomEnter;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _timeToZoomExit;

private:
	UFUNCTION()
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorHideInSnowmanInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorHideInSnowmanInteraction) { return 0; }
