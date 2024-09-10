#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "ETheMettleOfManPhase.h"
#include "TheMettleOfMan.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UTheMettleOfMan : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	int32 _tokenNeededToActivate;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _revealOutsideRange;

	UPROPERTY(EditDefaultsOnly)
	bool _mustBeInjured;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _enduranceHighlightEffectClass;

	UPROPERTY(ReplicatedUsing=OnRep_NumTokenSoFar, Transient)
	int32 _numTokenSoFar;

	UPROPERTY(ReplicatedUsing=OnRep_CurrentPhase, Transient)
	ETheMettleOfManPhase _currentPhase;

	UPROPERTY(Transient, Export)
	UStatusEffect* _revealToKillerEffect;

private:
	UFUNCTION()
	void OnRep_NumTokenSoFar();

	UFUNCTION()
	void OnRep_CurrentPhase();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTheMettleOfMan();
};

FORCEINLINE uint32 GetTypeHash(const UTheMettleOfMan) { return 0; }
