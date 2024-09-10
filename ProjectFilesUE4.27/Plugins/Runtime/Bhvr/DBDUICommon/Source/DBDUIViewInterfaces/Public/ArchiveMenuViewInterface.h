#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ArchiveTomeSkinData.h"
#include "UObject/ScriptInterface.h"
#include "EArchiveMenuState.h"
#include "UObject/NoExportTypes.h"
#include "ArchiveNodeViewData.h"
#include "TabWidgetData.h"
#include "ArchiveChallengeReminderViewData.h"
#include "EPlayerRole.h"
#include "ArchiveMenuViewInterface.generated.h"

class IArchiveRiftViewInterface;
class IArchiveTomeViewInterface;
class IArchiveCompendiumViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UArchiveMenuViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IArchiveMenuViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateBackgroundSkin(const int32 key, const FArchiveTomeSkinData& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ShowSlotSelector(const FArchiveNodeViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTitle(const FText& title);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabSelected(int32 key);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabsData(const TArray<FTabWidgetData>& tabsData, int32 selectedKey);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabEnabled(int32 key, bool enabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSubtitleVisible(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSubtitle(const FText& subtitle);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetReminderSlotsEnabled(bool enabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetRemainingTimeVisible(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetRemainingTime(const FString& remainingTime, bool isMoreThanWarningThreshold, EArchiveMenuState menuState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetQuestNodeHoverEffect(EPlayerRole role, bool isHovered);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMenuState(EArchiveMenuState menuState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetInfoButtonVisible(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetInfoButtonEnabled(bool isEnabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetEventLabel(const FString& eventLabel);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetControllerElementsEnabled(bool enabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetChallengeReminderVisibility(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetChallengeReminderData(const FArchiveChallengeReminderViewData& data, EPlayerRole role, bool needsAnimation, const FVector2D& animationOriginalPosition);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Init();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IArchiveTomeViewInterface> GetArchiveTomeInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IArchiveRiftViewInterface> GetArchiveRiftInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IArchiveCompendiumViewInterface> GetArchiveCompendiumInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void CloseSlotSelector();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ClearChallengeReminderData(EPlayerRole role);

};
