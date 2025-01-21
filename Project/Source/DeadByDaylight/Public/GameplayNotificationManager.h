#pragma once

#include "CoreMinimal.h"
#include "GameplayNotificationData.h"
#include "Components/ActorComponent.h"
#include "GameplayNotificationManager.generated.h"

class UGameplayModifierContainer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UGameplayNotificationManager : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_FireGameplayNotification(const UGameplayModifierContainer* modifierContainer, bool addToHistory);

public:
	UFUNCTION(BlueprintCallable)
	void FireGameplayNotification(const FGameplayNotificationData& notificationData, bool addToHistory);

public:
	UGameplayNotificationManager();
};

FORCEINLINE uint32 GetTypeHash(const UGameplayNotificationManager) { return 0; }
