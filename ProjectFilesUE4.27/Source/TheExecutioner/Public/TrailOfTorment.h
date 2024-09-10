#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "TrailOfTorment.generated.h"

class AGenerator;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UTrailOfTorment : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _cooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	int32 _highlightPriority;

	UPROPERTY(Replicated, Transient)
	bool _isPerkActivated;

	UPROPERTY(ReplicatedUsing=OnRep_HighlightGenerator, Transient)
	AGenerator* _highlightedGenerator;

	UPROPERTY(Transient, Export)
	UStatusEffect* _statusEffect;

private:
	UFUNCTION()
	void OnRep_HighlightGenerator(AGenerator* _oldHighlightedGenerator);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTrailOfTorment();
};

FORCEINLINE uint32 GetTypeHash(const UTrailOfTorment) { return 0; }
