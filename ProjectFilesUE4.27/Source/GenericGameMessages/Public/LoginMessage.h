#pragma once

#include "CoreMinimal.h"
#include "LoginMessage.generated.h"

USTRUCT()
struct FLoginMessage
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString MirrorsId;

public:
	GENERICGAMEMESSAGES_API FLoginMessage();
};

FORCEINLINE uint32 GetTypeHash(const FLoginMessage) { return 0; }
