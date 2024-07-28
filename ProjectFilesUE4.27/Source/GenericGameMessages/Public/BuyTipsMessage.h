#pragma once

#include "CoreMinimal.h"
#include "BuyTipsMessage.generated.h"

USTRUCT()
struct FBuyTipsMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 Result;

public:
	GENERICGAMEMESSAGES_API FBuyTipsMessage();
};

FORCEINLINE uint32 GetTypeHash(const FBuyTipsMessage) { return 0; }
