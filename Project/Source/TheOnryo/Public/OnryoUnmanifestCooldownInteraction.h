#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "OnryoUnmanifestCooldownInteraction.generated.h"

class UCurveFloat;
class AOnryoPower;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UOnryoUnmanifestCooldownInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _onryoPowerCooldownTime;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _playedCooldownSpeedCurve;

public:
	UFUNCTION(BlueprintCallable)
	void SetOnryoPower(AOnryoPower* onryoPower);

public:
	UOnryoUnmanifestCooldownInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOnryoUnmanifestCooldownInteraction) { return 0; }
