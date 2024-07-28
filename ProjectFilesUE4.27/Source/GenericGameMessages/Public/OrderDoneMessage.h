#pragma once

#include "CoreMinimal.h"
#include "OrderDoneMessage.generated.h"

USTRUCT()
struct FOrderDoneMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 Code;

	UPROPERTY(EditAnywhere)
	FString OrderId;

	UPROPERTY(EditAnywhere)
	FString OrderChannel;

public:
	GENERICGAMEMESSAGES_API FOrderDoneMessage();
};

FORCEINLINE uint32 GetTypeHash(const FOrderDoneMessage) { return 0; }
