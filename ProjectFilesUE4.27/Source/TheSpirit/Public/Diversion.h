#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ECamperDamageState.h"
#include "ECamperImmobilizeState.h"
#include "Diversion.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THESPIRIT_API UDiversion : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _diversionActivationTimePerLevel;

	UPROPERTY(EditDefaultsOnly)
	float _throwPebbleDistance;

private:
	UFUNCTION()
	void Authority_OnOwningSurvivorImmobilizedStateChanged(const ECamperImmobilizeState oldImmobilizeState, const ECamperImmobilizeState newImmobilizeState);

	UFUNCTION()
	void Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	UDiversion();
};

FORCEINLINE uint32 GetTypeHash(const UDiversion) { return 0; }
