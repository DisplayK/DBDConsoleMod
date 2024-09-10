#pragma once

#include "CoreMinimal.h"
#include "GameVersionMessage.generated.h"

USTRUCT()
struct FGameVersionMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString Version;

public:
	GENERICGAMEMESSAGES_API FGameVersionMessage();
};

FORCEINLINE uint32 GetTypeHash(const FGameVersionMessage) { return 0; }
