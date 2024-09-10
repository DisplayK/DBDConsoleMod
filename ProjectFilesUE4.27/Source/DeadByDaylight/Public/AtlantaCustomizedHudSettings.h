#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaCustomizedHudSettings.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaCustomizedHudSettings
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FGameplayTag Id;

	UPROPERTY()
	FVector2D NormalizedOffset;

	UPROPERTY()
	float Scale;

	UPROPERTY()
	float RenderOpacity;

	UPROPERTY()
	int32 Version;

	UPROPERTY()
	FGameplayTagContainer OverlapWrapperIds;

public:
	DEADBYDAYLIGHT_API FAtlantaCustomizedHudSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaCustomizedHudSettings) { return 0; }
