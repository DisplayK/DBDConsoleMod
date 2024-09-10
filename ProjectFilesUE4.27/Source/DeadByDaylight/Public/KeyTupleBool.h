#pragma once

#include "CoreMinimal.h"
#include "KeyTupleBool.generated.h"

USTRUCT()
struct FKeyTupleBool
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FName Key;

	UPROPERTY(SaveGame)
	bool Value;

public:
	DEADBYDAYLIGHT_API FKeyTupleBool();
};

FORCEINLINE uint32 GetTypeHash(const FKeyTupleBool) { return 0; }
