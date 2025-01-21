#pragma once

#include "CoreMinimal.h"
#include "EControlMode.h"
#include "InputCoreTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUIActionType.h"
#include "UIInputUtilities.generated.h"

class UObject;

UCLASS(BlueprintType)
class DBDINPUT_API UUIInputUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool ShouldUseAtlantaControls(const UObject* worldContextObject);

	UFUNCTION(BlueprintCallable)
	static bool IsInputKeyControlModePairValid(FKey inputKey, EControlMode controlMode);

	UFUNCTION(BlueprintCallable)
	static FKey GetKeyFromUIAction(const EUIActionType actionType, bool isUsingGamepad);

	UFUNCTION(BlueprintCallable)
	static bool AreGamepadButtonsXOSwitched();

public:
	UUIInputUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UUIInputUtilities) { return 0; }
