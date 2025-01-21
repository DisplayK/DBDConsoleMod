#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TheClownUtilities.generated.h"

class UObject;
class ADBDPlayer;
class UGassedStatusEffect;
class UActiveGasCloudTrackerComponent;

UCLASS(BlueprintType)
class UTheClownUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool IsGassed(const ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	static bool IsAffectedByAntidote(const ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	static UGassedStatusEffect* GetGassedStatusEffect(const ADBDPlayer* player);

	UFUNCTION(BlueprintPure)
	static UActiveGasCloudTrackerComponent* GetActiveGasCloudTrackerComponent(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static bool CanBeGassed(const ADBDPlayer* player);

public:
	UTheClownUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UTheClownUtilities) { return 0; }
