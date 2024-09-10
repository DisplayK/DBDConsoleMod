#pragma once

#include "CoreMinimal.h"
#include "DebugModelExtArchiveQuestSpecialBehaviours.generated.h"

USTRUCT()
struct FDebugModelExtArchiveQuestSpecialBehaviours
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString Id;

	UPROPERTY(EditAnywhere)
	FString Params;

public:
	DEADBYDAYLIGHT_API FDebugModelExtArchiveQuestSpecialBehaviours();
};

FORCEINLINE uint32 GetTypeHash(const FDebugModelExtArchiveQuestSpecialBehaviours) { return 0; }
