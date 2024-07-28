#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EConnectionQuality.h"
#include "GameplayTagContainer.h"
#include "PlayerStatusViewData.h"
#include "UObject/SoftObjectPtr.h"
#include "PlayerStatusViewInterface.generated.h"

class UTexture2D;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPlayerStatusViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPlayerStatusViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateSurvivorSpecificPingIcon(const EConnectionQuality& connectionQuality);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateSurvivorActivityProgress(const float progress);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TriggerAfflictionHit();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowSurvivorActivity(const TSoftObjectPtr<UTexture2D>& activityIcon, const bool shouldDisplayProgress);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTimerProgress(float value, bool isDeepWound);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetPlayerNameVisibility(bool visible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetKiller(FGameplayTag killerTag);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const FPlayerStatusViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetCampProgress(float value, bool isLocalPlayerAKiller);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PlayTimerAnimation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PlayHookEscapeFailedAnimation();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void HideSurvivorActivity();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EnableChasesMode(const bool isChased);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ClearData();

};
