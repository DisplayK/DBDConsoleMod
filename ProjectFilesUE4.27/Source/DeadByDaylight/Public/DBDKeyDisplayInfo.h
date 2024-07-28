#pragma once

#include "CoreMinimal.h"
#include "KeyDisplayInfo.h"
#include "UObject/NoExportTypes.h"
#include "EPlayerRole.h"
#include "InputCoreTypes.h"
#include "EInputInteractionType.h"
#include "DBDKeyDisplayInfo.generated.h"

class UPlayerInput;

UCLASS()
class DEADBYDAYLIGHT_API UDBDKeyDisplayInfo : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TMap<FName, FKeyDisplayInfo> _keyDisplayInfoMap;

	UPROPERTY()
	TMap<EInputInteractionType, FName> _interactionTypeToActionMap_Camper;

	UPROPERTY()
	TMap<EInputInteractionType, FName> _interactionTypeToActionMap_Slasher;

public:
	UFUNCTION()
	bool IsExcludedKey(FKey key);

	UFUNCTION()
	FKeyDisplayInfo GetKeyDisplayInfoForInteractionType(UPlayerInput* playerInput, EPlayerRole playerRole, EInputInteractionType interactionType, bool useGamePad);

	UFUNCTION()
	FKeyDisplayInfo GetKeyDisplayInfo(FKey key);

	UFUNCTION()
	FKey GetFirstKeyForAction(UPlayerInput* playerInput, FName actionName, bool useGamePad);

	UFUNCTION()
	FName GetActionForInteractionType(EPlayerRole playerRole, EInputInteractionType inputInteractionType, bool useGamePad, bool ignoreInteractMash);

public:
	UDBDKeyDisplayInfo();
};

FORCEINLINE uint32 GetTypeHash(const UDBDKeyDisplayInfo) { return 0; }
