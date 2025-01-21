#pragma once

#include "CoreMinimal.h"
#include "SkuDetailsMessage.generated.h"

USTRUCT()
struct FSkuDetailsMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TMap<FString, FString> BundlePrices;

public:
	GENERICGAMEMESSAGES_API FSkuDetailsMessage();
};

FORCEINLINE uint32 GetTypeHash(const FSkuDetailsMessage) { return 0; }
