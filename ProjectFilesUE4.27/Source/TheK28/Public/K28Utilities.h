#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "K28Utilities.generated.h"

class AK28Power;
class UK28TeleportationStrategyComponent;
class UObject;
class AK28SecondaryCamera;
class UK28DayNightComponent;
class AK28Remnant;

UCLASS(BlueprintType)
class UK28Utilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool IsLockerUsedByKillerLocked(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static UK28TeleportationStrategyComponent* GetTeleportationStrategyComponent(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static AK28SecondaryCamera* GetSecondaryCamera(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static AK28Remnant* GetRemnant(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static AK28Power* GetK28Power(const UObject* worldContextObject);

	UFUNCTION(BlueprintPure)
	static UK28DayNightComponent* GetDayNightComponent(const UObject* worldContextObject);

public:
	UK28Utilities();
};

FORCEINLINE uint32 GetTypeHash(const UK28Utilities) { return 0; }
