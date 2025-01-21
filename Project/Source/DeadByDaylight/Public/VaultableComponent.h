#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnVaultEvent.h"
#include "VaultableComponent.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UVaultableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnVaultEvent OnVault;

public:
	UFUNCTION(BlueprintCallable)
	void SignalVault(ADBDPlayer* survivor, float interactionTime);

private:
	UFUNCTION()
	void OnChaseEnded(ADBDPlayer* survivor, float chaseTimer);

public:
	UVaultableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UVaultableComponent) { return 0; }
