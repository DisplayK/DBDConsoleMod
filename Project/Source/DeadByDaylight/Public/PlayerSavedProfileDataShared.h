#pragma once

#include "CoreMinimal.h"
#include "EquippedPlayerCustomization.h"
#include "PlayerSavedProfileDataShared.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSavedProfileDataShared
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PlayerName;

	UPROPERTY()
	int32 SelectedCamperIndex;

	UPROPERTY()
	int32 SelectedSlasherIndex;

	UPROPERTY()
	FEquippedPlayerCustomization SelectedCharacterCustomization;

	UPROPERTY()
	int32 CamperStreak;

	UPROPERTY()
	bool ShowPortraitBorder;

	UPROPERTY()
	bool HasActiveSubscription;

protected:
	UPROPERTY()
	FString PlatformId;

public:
	DEADBYDAYLIGHT_API FPlayerSavedProfileDataShared();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerSavedProfileDataShared) { return 0; }
