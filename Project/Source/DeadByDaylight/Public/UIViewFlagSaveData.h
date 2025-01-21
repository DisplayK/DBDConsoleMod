#pragma once

#include "CoreMinimal.h"
#include "UIViewFlagSaveData.generated.h"

USTRUCT()
struct FUIViewFlagSaveData
{
	GENERATED_BODY()

private:
	UPROPERTY(SaveGame)
	TMap<FString, bool> CharactersFirstBloodweb;

public:
	DEADBYDAYLIGHT_API FUIViewFlagSaveData();
};

FORCEINLINE uint32 GetTypeHash(const FUIViewFlagSaveData) { return 0; }
