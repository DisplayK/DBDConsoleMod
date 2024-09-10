#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NurseHelper.generated.h"

class ADBDPlayer;
class ABlinkPowerItem;

UCLASS(BlueprintType)
class THENURSE_API UNurseHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static ABlinkPowerItem* GetBlinkPowerItem(ADBDPlayer* player);

public:
	UNurseHelper();
};

FORCEINLINE uint32 GetTypeHash(const UNurseHelper) { return 0; }
