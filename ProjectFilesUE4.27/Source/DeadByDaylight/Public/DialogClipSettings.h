#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DialogClipSettings.generated.h"

class UAkAudioEvent;
class UDialogHandlerCondition;

USTRUCT()
struct FDialogClipSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	UAkAudioEvent* Clip;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDialogHandlerCondition> ConditionClass;

	UPROPERTY(Transient)
	UDialogHandlerCondition* Condition;

	UPROPERTY(EditDefaultsOnly)
	int32 Priority;

	UPROPERTY(EditDefaultsOnly)
	int32 Weight;

	UPROPERTY(EditDefaultsOnly)
	bool IsOnlyPlayingOnce;

public:
	DEADBYDAYLIGHT_API FDialogClipSettings();
};

FORCEINLINE uint32 GetTypeHash(const FDialogClipSettings) { return 0; }
