#pragma once

#include "CoreMinimal.h"
#include "PlayerReadyStatusData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerReadyStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	int32 PlayerId;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 SlotIndex;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsReady;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsSlasher;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsLocalPlayer;

public:
	DEADBYDAYLIGHT_API FPlayerReadyStatusData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerReadyStatusData) { return 0; }
