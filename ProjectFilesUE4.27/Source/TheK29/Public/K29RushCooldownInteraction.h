#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "InteractionDefinition.h"
#include "K29RushCooldownInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29RushCooldownInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FTunableStat _cooldownTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool _isCameraRestrictedForDuration;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FDBDTunableRowHandle _cameraRestrictionTime;

protected:
	UFUNCTION()
	void ResetCameraInputLimit();

public:
	UK29RushCooldownInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK29RushCooldownInteraction) { return 0; }
