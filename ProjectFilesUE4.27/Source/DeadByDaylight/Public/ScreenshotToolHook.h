#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CustomizationItemData.h"
#include "CharacterToolSpawnParameters.h"
#include "CharacterToolItemData.h"
#include "CharacterDescription.h"
#include "EScreenshotToolState.h"
#include "ScreenshotToolHook.generated.h"

class ADBDMenuPlayer;
class ACharm;

UINTERFACE(Blueprintable)
class DEADBYDAYLIGHT_API UScreenshotToolHook : public UInterface
{
	GENERATED_BODY()
};

class DEADBYDAYLIGHT_API IScreenshotToolHook : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void ScreenshotBeginPlay(bool isPIE);

	UFUNCTION(BlueprintNativeEvent)
	void PreTakeItemScreenshot(const FCharacterToolItemData& item);

	UFUNCTION(BlueprintNativeEvent)
	void PreSpawnCharm(const FCustomizationItemData& item);

	UFUNCTION(BlueprintNativeEvent)
	void PreSpawnCharacter(const FCharacterDescription& description, FCharacterToolSpawnParameters& spawnParams);

	UFUNCTION(BlueprintNativeEvent)
	void PreHookDestruction();

	UFUNCTION(BlueprintNativeEvent)
	void PreDestroyCharm(ACharm* charm);

	UFUNCTION(BlueprintNativeEvent)
	void PreDestroyCharacter(ADBDMenuPlayer* character);

	UFUNCTION(BlueprintNativeEvent)
	void PreBatchItems();

	UFUNCTION(BlueprintNativeEvent)
	void PostUpdateCharacter(ADBDMenuPlayer* character);

	UFUNCTION(BlueprintNativeEvent)
	void PostTakeItemScreenshot(const FCharacterToolItemData& item, bool success);

	UFUNCTION(BlueprintNativeEvent)
	void PostStateChanged(EScreenshotToolState previousState, EScreenshotToolState currentState);

	UFUNCTION(BlueprintNativeEvent)
	void PostSpawnCharm(ACharm* charm);

	UFUNCTION(BlueprintNativeEvent)
	void PostSpawnCharacter(ADBDMenuPlayer* character);

	UFUNCTION(BlueprintNativeEvent)
	void PostHookConstruction();

	UFUNCTION(BlueprintNativeEvent)
	void PostBatchItems(const TArray<FCharacterToolItemData>& items);

	UFUNCTION(BlueprintNativeEvent)
	bool IsPIEOnly() const;

};
