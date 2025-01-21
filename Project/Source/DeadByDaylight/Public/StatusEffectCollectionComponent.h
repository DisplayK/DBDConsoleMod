#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusEffectCollectionComponent.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStatusEffectCollectionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_Array, Transient, Export)
	TArray<UStatusEffect*> _array;

	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _local_oldArray;

private:
	UFUNCTION()
	void OnRep_Array();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UStatusEffectCollectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UStatusEffectCollectionComponent) { return 0; }
