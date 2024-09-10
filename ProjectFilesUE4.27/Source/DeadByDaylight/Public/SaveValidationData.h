#pragma once

#include "CoreMinimal.h"
#include "SaveValidationData.generated.h"

USTRUCT()
struct FSaveValidationData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString PlayerUID;

	UPROPERTY()
	TArray<int32> CharacterData;

public:
	DEADBYDAYLIGHT_API FSaveValidationData();
};

FORCEINLINE uint32 GetTypeHash(const FSaveValidationData) { return 0; }
