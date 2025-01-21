#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "S33P02.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class US33P02 : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _distanceRadius;

private:
	UPROPERTY(EditDefaultsOnly)
	float _struggleProgressionPausedDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _S33P02StatusEffect;

	UPROPERTY(ReplicatedUsing=OnRep_ReassuredSurvivors, Transient)
	TArray<ACamperPlayer*> _reassuredSurvivors;

private:
	UFUNCTION()
	void OnRep_ReassuredSurvivors();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void Local_EffectTriggered(const FTransform location);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US33P02();
};

FORCEINLINE uint32 GetTypeHash(const US33P02) { return 0; }
