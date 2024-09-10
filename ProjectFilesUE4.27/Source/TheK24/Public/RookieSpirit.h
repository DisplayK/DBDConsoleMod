#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "RookieSpirit.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class URookieSpirit : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_NumberOfGreatSkillChecksOnGeneratorRepair, Transient)
	int32 _numberOfGreatSkillChecksOnGeneratorRepair;

	UPROPERTY(EditDefaultsOnly)
	int32 _numberOfGeneratorRepairGreatSkillChecksRequired;

private:
	UFUNCTION()
	void OnRep_NumberOfGreatSkillChecksOnGeneratorRepair();

	UFUNCTION()
	void HandleGeneratorIsDamagedChanged(AGenerator* generator, ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	URookieSpirit();
};

FORCEINLINE uint32 GetTypeHash(const URookieSpirit) { return 0; }
