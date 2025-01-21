#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PerkCollectionComponent.generated.h"

class UPerk;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPerkCollectionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_Array, Transient, Export)
	TArray<UPerk*> _array;

private:
	UFUNCTION()
	void OnRep_Array(const TArray<UPerk*>& oldArray);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPerkCollectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPerkCollectionComponent) { return 0; }
