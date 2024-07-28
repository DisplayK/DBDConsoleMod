#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FriendsMenuUtilities.generated.h"

UCLASS()
class DBDUIVIEWSMOBILE_API UFriendsMenuUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFriendsMenuUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UFriendsMenuUtilities) { return 0; }
