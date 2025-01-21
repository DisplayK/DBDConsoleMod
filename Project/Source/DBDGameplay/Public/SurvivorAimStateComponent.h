#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorAimStateComponent.generated.h"

class ACollectable;

UCLASS(meta=(BlueprintSpawnableComponent))
class USurvivorAimStateComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ACollectable* _aimableCollectable;

public:
	USurvivorAimStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorAimStateComponent) { return 0; }
