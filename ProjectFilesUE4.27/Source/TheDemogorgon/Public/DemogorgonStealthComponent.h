#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "DemogorgonStealthComponent.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDemogorgonStealthComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UStatusEffect* _stealthEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _stealthEffectClass;

private:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	UDemogorgonStealthComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonStealthComponent) { return 0; }
