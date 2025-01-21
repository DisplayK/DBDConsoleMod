#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "DeadMansSwitch.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeadMansSwitch : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _activationDurationByLevels;

	UPROPERTY(EditDefaultsOnly)
	bool _anySurvivorLetGo;

	UPROPERTY(ReplicatedUsing=OnRep_BlockedGenerators, Transient)
	TArray<AGenerator*> _blockedGenerators;

private:
	UFUNCTION()
	void OnRep_BlockedGenerators();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDeadMansSwitch();
};

FORCEINLINE uint32 GetTypeHash(const UDeadMansSwitch) { return 0; }
