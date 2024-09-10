#pragma once

#include "CoreMinimal.h"
#include "EAudioCustomizationCategory.h"
#include "CustomSoundFXData.generated.h"

USTRUCT(BlueprintType)
struct FCustomSoundFXData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EAudioCustomizationCategory AudioCategory;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString SwitchState;

public:
	DEADBYDAYLIGHT_API FCustomSoundFXData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomSoundFXData) { return 0; }
