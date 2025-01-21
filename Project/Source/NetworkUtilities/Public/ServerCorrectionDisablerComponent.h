#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "ServerCorrectionDisablerComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class NETWORKUTILITIES_API UServerCorrectionDisablerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetServerCorrectionEnabled(const bool enabled, FGameplayTag channel);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetServerCorrectionEnabled(const bool enabled, FGameplayTag channel);

	UFUNCTION(BlueprintPure)
	bool GetServerCorrectionEnabled() const;

public:
	UServerCorrectionDisablerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UServerCorrectionDisablerComponent) { return 0; }
