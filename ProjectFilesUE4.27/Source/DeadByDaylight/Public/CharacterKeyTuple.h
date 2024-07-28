#pragma once

#include "CoreMinimal.h"
#include "CharacterSavedProfileDataV7.h"
#include "CharacterKeyTuple.generated.h"

USTRUCT()
struct FCharacterKeyTuple
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	int32 Key;

	UPROPERTY(SaveGame)
	FCharacterSavedProfileDataV7 Data;

public:
	DEADBYDAYLIGHT_API FCharacterKeyTuple();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterKeyTuple) { return 0; }
