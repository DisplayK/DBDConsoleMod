#pragma once

#include "CoreMinimal.h"
#include "ForAllSurvivorsStatusEffectImposer.h"
#include "Perk.h"
#include "DBDTunableRowHandle.h"
#include "ProveThyself.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UProveThyself : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _proveThyselfRange;

	UPROPERTY(EditDefaultsOnly)
	FForAllSurvivorsStatusEffectImposer _proveThyselfEffectImposer;

private:
	UFUNCTION()
	void OnSurvivorInOwnerRangeChanged(const bool inRange);

public:
	UProveThyself();
};

FORCEINLINE uint32 GetTypeHash(const UProveThyself) { return 0; }
