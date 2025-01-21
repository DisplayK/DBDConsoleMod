#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Breakout.generated.h"

class UStatusEffect;
class ASlasherPlayer;
class ADBDPlayer;
class ACamperPlayer;

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBreakout : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ASlasherPlayer* _slasher;

	UPROPERTY(Transient)
	ADBDPlayer* _playerOwner;

	UPROPERTY(EditDefaultsOnly, Transient)
	TSubclassOf<UStatusEffect> _hasteStatusEffect;

	UPROPERTY(EditDefaultsOnly, Transient)
	TSubclassOf<UStatusEffect> _wiggleStatusEffect;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _hasteEffect;

	UPROPERTY(EditDefaultsOnly)
	float _wiggleEffect;

	UPROPERTY(EditDefaultsOnly)
	float _survivorDistanceMax;

	UPROPERTY(ReplicatedUsing=OnRep_IsPerkActive)
	bool _isPerkActive;

private:
	UFUNCTION()
	void OnSlasherSet(ASlasherPlayer* slasher);

	UFUNCTION()
	void OnRep_IsPerkActive();

	UFUNCTION()
	void Authority_OnRangeChanged(const bool inRange);

	UFUNCTION()
	void Authority_ImposeWiggleStatusEffect(ACamperPlayer* survivor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBreakout();
};

FORCEINLINE uint32 GetTypeHash(const UBreakout) { return 0; }
