#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "GameEventDelegate.h"
#include "GameEventListenerCollectionComponent.generated.h"

class UGameEventDispatcher;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGameEventListenerCollectionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void UnlistenToGameEvent(FGameplayTag eventType);

	UFUNCTION(BlueprintCallable)
	void UnlistenToAllGameEvents();

	UFUNCTION(BlueprintCallable)
	void ListenToGameEvent(FGameplayTag eventType, FGameEventDelegate delegateToBind);

	UFUNCTION(BlueprintCallable)
	void AttachGameEventDispatcher(UGameEventDispatcher* gameEventDispatcher);

public:
	UGameEventListenerCollectionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGameEventListenerCollectionComponent) { return 0; }
