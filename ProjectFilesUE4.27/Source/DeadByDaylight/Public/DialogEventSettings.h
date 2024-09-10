#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DialogClipSettings.h"
#include "DialogEventSettings.generated.h"

USTRUCT()
struct FDialogEventSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag GameEventTrigger;

	UPROPERTY(EditDefaultsOnly)
	TArray<FDialogClipSettings> Clips;

	UPROPERTY(EditDefaultsOnly)
	bool OverrideCurrentAudio;

	UPROPERTY(EditDefaultsOnly)
	float DelayUntilPlay;

	UPROPERTY(EditDefaultsOnly)
	float PlayProbability;

public:
	DEADBYDAYLIGHT_API FDialogEventSettings();
};

FORCEINLINE uint32 GetTypeHash(const FDialogEventSettings) { return 0; }
