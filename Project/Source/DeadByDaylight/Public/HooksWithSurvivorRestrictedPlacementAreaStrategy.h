#pragma once

#include "CoreMinimal.h"
#include "RestrictedPlacementAreaStrategy.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "HooksWithSurvivorRestrictedPlacementAreaStrategy.generated.h"

UCLASS(EditInlineNew)
class UHooksWithSurvivorRestrictedPlacementAreaStrategy : public URestrictedPlacementAreaStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle RestrictedSphericalRadius;

	UPROPERTY(EditDefaultsOnly)
	bool _isRestrictionLingeringEnabled;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _restrictionLingerTime;

	UPROPERTY(EditDefaultsOnly)
	bool _useSphericalZoneForBasementHooks;

private:
	UPROPERTY(Transient)
	TArray<FVector> RestrictedSphericalLocations;

public:
	UHooksWithSurvivorRestrictedPlacementAreaStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UHooksWithSurvivorRestrictedPlacementAreaStrategy) { return 0; }
