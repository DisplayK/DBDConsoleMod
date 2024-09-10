#pragma once

#include "CoreMinimal.h"
#include "GeneratorTrapPerk.h"
#include "Templates/SubclassOf.h"
#include "S32P01.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class US32P01 : public UGeneratorTrapPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _generatorRevealRange;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealEffect;

	UPROPERTY(Transient, Export)
	UStatusEffect* _revealStatus;

	UPROPERTY(ReplicatedUsing=OnRep_IsKillerInRange)
	bool _isKillerInRange;

private:
	UFUNCTION()
	void OnRep_IsKillerInRange();

public:
	UFUNCTION(BlueprintPure)
	float GetGeneratorRevealRange() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US32P01();
};

FORCEINLINE uint32 GetTypeHash(const US32P01) { return 0; }
