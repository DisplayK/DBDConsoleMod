#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RespawningEventComponent.h"
#include "Lunar2022EventComponent.generated.h"

class ARedEnvelope;
class ADBDPlayerState;

UCLASS(meta=(BlueprintSpawnableComponent))
class LUNAR2022_API ULunar2022EventComponent : public URespawningEventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FName _eventTag;

	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<ARedEnvelope>> _redEnvelopes;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _scoreNormal;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _scoreJackpot;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _scoreOwner;

private:
	UFUNCTION()
	void Authority_OnPlayerFinishPlaying(const ADBDPlayerState* playerState);

public:
	ULunar2022EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULunar2022EventComponent) { return 0; }
