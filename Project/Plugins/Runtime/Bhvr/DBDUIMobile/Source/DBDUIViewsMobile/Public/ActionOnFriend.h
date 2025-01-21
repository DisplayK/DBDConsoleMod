#pragma once

#include "CoreMinimal.h"
#include "AtlantaFriendUIData.h"
#include "EActionOnFriendType.h"
#include "ActionOnFriend.generated.h"

class UUMGBaseFriendListElement;

USTRUCT(BlueprintType)
struct FActionOnFriend
{
	GENERATED_BODY()

public:
	UPROPERTY()
	EActionOnFriendType ActionToProceed;

	UPROPERTY()
	FAtlantaFriendUIData AtlantaFriendDataToUpdate;

	UPROPERTY(Export)
	UUMGBaseFriendListElement* ActionOwner;

public:
	DBDUIVIEWSMOBILE_API FActionOnFriend();
};

FORCEINLINE uint32 GetTypeHash(const FActionOnFriend) { return 0; }
