#pragma once

#include "CoreMinimal.h"
#include "ArchivesQuestSpecialBehaviour.generated.h"

USTRUCT()
struct FArchivesQuestSpecialBehaviour
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	FString Params;

	UPROPERTY(SkipSerialization)
	bool Params_IsSet;

public:
	DEADBYDAYLIGHT_API FArchivesQuestSpecialBehaviour();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesQuestSpecialBehaviour) { return 0; }
