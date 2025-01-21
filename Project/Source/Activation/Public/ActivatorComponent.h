#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActivatorComponent.generated.h"

class UGameplayTagContainerComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ACTIVATION_API UActivatorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	bool _searchForActivatableSubAnimInstances;

public:
	UFUNCTION(BlueprintCallable)
	void SetObjectState(UGameplayTagContainerComponent* objectState);

public:
	UActivatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UActivatorComponent) { return 0; }
