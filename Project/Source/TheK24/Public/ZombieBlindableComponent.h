#pragma once

#include "CoreMinimal.h"
#include "BlindableBaseComponent.h"
#include "ZombieBlindableComponent.generated.h"

class UGameplayTagContainerComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombieBlindableComponent : public UBlindableBaseComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UGameplayTagContainerComponent* _ownerObjectState;

public:
	UZombieBlindableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UZombieBlindableComponent) { return 0; }
