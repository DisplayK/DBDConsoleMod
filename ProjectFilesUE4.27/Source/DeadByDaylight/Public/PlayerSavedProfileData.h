#pragma once

#include "CoreMinimal.h"
#include "PlayerSavedProfileDataShared.h"
#include "PlayerSavedProfileDataLocal.h"
#include "ConsoleUserSettings.h"
#include "PlayerSavedProfileData.generated.h"

USTRUCT()
struct FPlayerSavedProfileData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PlayerUID;

	UPROPERTY()
	FPlayerSavedProfileDataShared SharedData;

	UPROPERTY()
	FPlayerSavedProfileDataLocal LocalData;

	UPROPERTY()
	FConsoleUserSettings ConsoleUserSettings;

public:
	DEADBYDAYLIGHT_API FPlayerSavedProfileData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerSavedProfileData) { return 0; }
