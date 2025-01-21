#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "CorruptIntervention.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UCorruptIntervention : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	uint8 _blockedGeneratorCount;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _generatorBlockDuration;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _generatorAuraColorForKiller;

private:
	UPROPERTY(ReplicatedUsing=OnRep_BlockedGenerators, Transient)
	TArray<AGenerator*> _blockedGenerators;

private:
	UFUNCTION()
	void OnRep_BlockedGenerators();

	UFUNCTION()
	void LevelReadyToBlockedGenerators();

	UFUNCTION(BlueprintPure)
	float GetGeneratorBlockDuration() const;

	UFUNCTION()
	void Authority_TryActivatePerk();

	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCorruptIntervention();
};

FORCEINLINE uint32 GetTypeHash(const UCorruptIntervention) { return 0; }
