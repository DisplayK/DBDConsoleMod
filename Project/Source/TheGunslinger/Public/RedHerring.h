#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "RedHerring.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class URedHerring : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient)
	AGenerator* _generatorBeingRepaired;

	UPROPERTY(ReplicatedUsing=OnRep_MarkedGenerator, Transient)
	AGenerator* _markedGenerator;

	UPROPERTY(EditDefaultsOnly)
	float _secondsToActivatePerk;

	UPROPERTY(EditDefaultsOnly)
	float _loudNoiseTriggeredNotifyTime;

	UPROPERTY(EditDefaultsOnly)
	float _cooldownLevels;

private:
	UFUNCTION()
	void OnRep_MarkedGenerator(AGenerator* oldMarkedGenerator);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnLoudNoiseTriggered();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	URedHerring();
};

FORCEINLINE uint32 GetTypeHash(const URedHerring) { return 0; }
