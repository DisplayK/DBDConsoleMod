#pragma once

#include "CoreMinimal.h"
#include "BuyCurrencyMessage.generated.h"

USTRUCT()
struct FBuyCurrencyMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString ItemId;

public:
	GENERICGAMEMESSAGES_API FBuyCurrencyMessage();
};

FORCEINLINE uint32 GetTypeHash(const FBuyCurrencyMessage) { return 0; }
