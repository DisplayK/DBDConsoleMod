#pragma once

#include "CoreMinimal.h"
#include "TutorialEndMessage.generated.h"

USTRUCT()
struct FTutorialEndMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FTutorialEndMessage();
};

FORCEINLINE uint32 GetTypeHash(const FTutorialEndMessage) { return 0; }
