#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "FlickerSettings.generated.h"

USTRUCT()
struct FFlickerSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle VisibleDuration;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> VisibileDurationAddModifiers;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle InvisibleDuration;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> InvisibleDurationAddModifiers;

	UPROPERTY(EditDefaultsOnly)
	bool StartVisible;

public:
	THEONRYO_API FFlickerSettings();
};

FORCEINLINE uint32 GetTypeHash(const FFlickerSettings) { return 0; }
