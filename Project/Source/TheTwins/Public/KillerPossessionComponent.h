#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "PossessionComponent.h"
#include "KillerPossessionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UKillerPossessionComponent : public UPossessionComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_ShouldDeactivateCollisionsWithSurvivors)
	bool _shouldDeactivateCollisionsWithSurvivors;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _timeBeforeCollisionsDeactivation;

private:
	UFUNCTION()
	void OnRep_ShouldDeactivateCollisionsWithSurvivors();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UKillerPossessionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerPossessionComponent) { return 0; }
