#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DialogEventSettings.h"
#include "Components/ActorComponent.h"
#include "DialogHandlerComponent.generated.h"

class UAkAudioEvent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDialogHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _minimumDelayBetweenDialog;

	UPROPERTY(EditDefaultsOnly)
	float _maxSubtitleDistance;

	UPROPERTY(EditDefaultsOnly)
	TArray<FDialogEventSettings> _dialogEvents;

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _stopAudioGameplayEvents;

	UPROPERTY(EditDefaultsOnly)
	UAkAudioEvent* _stopAudioClip;

public:
	UDialogHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDialogHandlerComponent) { return 0; }
