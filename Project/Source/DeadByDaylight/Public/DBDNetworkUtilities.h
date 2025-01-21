#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDNetworkUtilities.generated.h"

class UObject;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UDBDNetworkUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool IsRunningDedicatedServerFlow();

	UFUNCTION(BlueprintPure)
	static bool IsOnDedicatedServerNetwork(const UObject* worldContextObject);

public:
	UDBDNetworkUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDNetworkUtilities) { return 0; }
