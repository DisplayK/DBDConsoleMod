#pragma once

#include "CoreMinimal.h"
#include "AkEventWithSubtitle.h"
#include "GameplayTagContainer.h"
#include "DialogPlannedPlayback.generated.h"

USTRUCT()
struct FDialogPlannedPlayback
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<FAkEventWithSubtitle> PlannedClip;

	UPROPERTY(Transient)
	FGameplayTag GameEventTrigger;

	UPROPERTY(Transient)
	bool IsDeletingAfterTrigger;

public:
	DEADBYDAYLIGHT_API FDialogPlannedPlayback();
};

FORCEINLINE uint32 GetTypeHash(const FDialogPlannedPlayback) { return 0; }
