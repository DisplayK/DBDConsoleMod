#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "ThrillingTremors.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UThrillingTremors : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	int32 _cooldownByLevel;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _durationByLevel;

	UPROPERTY(EditDefaultsOnly)
	bool _disableWhenSurvivorPutDownOrUnhooked;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _generatorAuraColorForKiller;

	UPROPERTY(ReplicatedUsing=OnRep_BlockedGenerators, Transient)
	TArray<AGenerator*> _blockedGenerators;

	UPROPERTY(Transient)
	TArray<AGenerator*> _revealedGenerators;

private:
	UFUNCTION()
	void OnRep_BlockedGenerators();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UThrillingTremors();
};

FORCEINLINE uint32 GetTypeHash(const UThrillingTremors) { return 0; }
