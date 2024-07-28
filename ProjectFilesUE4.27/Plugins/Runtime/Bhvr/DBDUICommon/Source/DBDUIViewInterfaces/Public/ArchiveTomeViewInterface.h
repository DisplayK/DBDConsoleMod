#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EditorInterfaces.h"
#include "TabWidgetData.h"
#include "EArchiveTomeMenuState.h"
#include "UObject/ScriptInterface.h"
#include "ArchiveTomeViewInterface.generated.h"

class UMaterialInterface;
class IArchiveQuestMapViewInterface;
class IArchiveJournalViewInterface;
class IArchiveLevelProgressionViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UArchiveTomeViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IArchiveTomeViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateBackgroundSkin(int32 key, UMaterialInterface* skinMaterail);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ToggleEditor(bool isEnabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSideNavTabsVisibility(int32 key, bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSideNavTabsEnabled(int32 key, bool isEnabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSideNavTabsData(const TArray<FTabWidgetData>& tabsData, int32 selectedKey);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetNotificationVisibility(int32 key, bool hasNotification);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMenuState(EArchiveTomeMenuState menuState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	EArchiveTomeMenuState GetMenuState() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IArchiveQuestMapViewInterface> GetArchiveQuestMapInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IArchiveLevelProgressionViewInterface> GetArchiveLevelProgressionInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IArchiveJournalViewInterface> GetArchiveJournalInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FEditorInterfaces GetArchiveEditorInterface() const;

};
