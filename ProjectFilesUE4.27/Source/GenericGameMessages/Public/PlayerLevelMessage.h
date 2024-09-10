#pragma once

#include "CoreMinimal.h"
#include "PlayerLevelMessage.generated.h"

USTRUCT()
struct FPlayerLevelMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 Level;

	UPROPERTY(EditAnywhere)
	int32 TotalXp;

public:
	GENERICGAMEMESSAGES_API FPlayerLevelMessage();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerLevelMessage) { return 0; }
