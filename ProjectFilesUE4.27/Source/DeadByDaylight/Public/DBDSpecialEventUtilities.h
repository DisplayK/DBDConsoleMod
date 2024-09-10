#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EOfferingEffectType.h"
#include "DBDSpecialEventUtilities.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDSpecialEventUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool DoesPlayerHasEventOffering(ADBDPlayer* player, EOfferingEffectType offeringEffectType);

public:
	UDBDSpecialEventUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDSpecialEventUtilities) { return 0; }
