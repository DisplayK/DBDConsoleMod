#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReverseBearTrapUtilities.generated.h"

class AReverseBearTrap;
class ADBDPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UReverseBearTrapUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static AReverseBearTrap* GetAttachedRBT(ADBDPlayer* player);

public:
	UReverseBearTrapUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UReverseBearTrapUtilities) { return 0; }
