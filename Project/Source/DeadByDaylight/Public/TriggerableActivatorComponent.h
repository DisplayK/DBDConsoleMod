#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "TriggerableActivatorComponent.generated.h"

class UTriggerableWorldObjectComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTriggerableActivatorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UTriggerableWorldObjectComponent> _triggerableClass;

	UPROPERTY(Transient, Export)
	TArray<UTriggerableWorldObjectComponent*> _triggerables;

private:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	UTriggerableActivatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTriggerableActivatorComponent) { return 0; }
