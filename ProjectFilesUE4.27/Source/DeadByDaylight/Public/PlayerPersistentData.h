#pragma once

#include "CoreMinimal.h"
#include "EProviderFlag.h"
#include "EPlayerRole.h"
#include "PlayerLoadoutData.h"
#include "PlayerSavedProfileData.h"
#include "EPlatformFlag.h"
#include "PlayerPersistentData.generated.h"

USTRUCT()
struct FPlayerPersistentData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	EPlayerRole GameRole;

	UPROPERTY(Transient)
	FPlayerLoadoutData StartingLoadout;

	UPROPERTY(Transient)
	FPlayerLoadoutData CurrentLoadout;

	UPROPERTY()
	FPlayerSavedProfileData SavedData;

	UPROPERTY()
	EPlatformFlag PlayerPlatform;

	UPROPERTY()
	EProviderFlag PlayerProvider;

public:
	DEADBYDAYLIGHT_API FPlayerPersistentData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerPersistentData) { return 0; }
