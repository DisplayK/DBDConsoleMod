#pragma once

#include "CoreMinimal.h"
#include "SaveDataBase.h"
#include "LegacyPlayerSavedProfileDataLocal.h"
#include "LegacyPlayerSavedProfileDataShared.h"
#include "LegacyPlayerSavedProfileData.generated.h"

USTRUCT()
struct FLegacyPlayerSavedProfileData: public FSaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FString PlayerUID;

	UPROPERTY(SaveGame)
	FLegacyPlayerSavedProfileDataShared SharedData;

	UPROPERTY(SaveGame)
	FLegacyPlayerSavedProfileDataLocal LocalData;

public:
	DEADBYDAYLIGHT_API FLegacyPlayerSavedProfileData();
};

FORCEINLINE uint32 GetTypeHash(const FLegacyPlayerSavedProfileData) { return 0; }
