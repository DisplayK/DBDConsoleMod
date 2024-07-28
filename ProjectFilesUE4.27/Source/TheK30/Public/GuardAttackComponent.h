#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "EDetectionZone.h"
#include "GuardAttackComponent.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UGuardAttackComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _killerInstinctEffectClass;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _killerInstinctEffectDuration;

	UPROPERTY(EditDefaultsOnly)
	EDetectionZone _detectionZoneToUse;

	UPROPERTY()
	TSet<TWeakObjectPtr<ACamperPlayer>> _survivorsInZone;

public:
	UGuardAttackComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGuardAttackComponent) { return 0; }
