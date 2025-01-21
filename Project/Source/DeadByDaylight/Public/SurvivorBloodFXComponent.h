#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorBloodFXComponent.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USurvivorBloodFXComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UNiagaraComponent* SpawnBloodSpurts();

public:
	USurvivorBloodFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorBloodFXComponent) { return 0; }
