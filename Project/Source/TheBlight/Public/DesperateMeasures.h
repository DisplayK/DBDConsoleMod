#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "DesperateMeasures.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDesperateMeasures : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _healAndUnhookMultiplier;

	UPROPERTY(Replicated, Transient)
	int32 _nbInjuredHookedOrDyingSurvivors;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDesperateMeasures();
};

FORCEINLINE uint32 GetTypeHash(const UDesperateMeasures) { return 0; }
