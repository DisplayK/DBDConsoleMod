#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "EOverlayTabs.h"
#include "Components/SlateWrapperTypes.h"
#include "UMGAtlantaSettingScreen.generated.h"

class UHorizontalBox;
class UWidgetSwitcher;
class UUMGSettingMenuButton;
class UTexture2D;
class UUMGSettingContextWidget;

UCLASS(EditInlineNew)
class UUMGAtlantaSettingScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWidgetSwitcher* SettingContextSwitcher;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* SettingTabBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* AlwaysDisplayButtonBox;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGSettingMenuButton> _settingTabButtonClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGSettingMenuButton> _settingAlwaysDisplayButtonClass;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftObjectPtr<UTexture2D> _buttonBoxDividerAsset;

	UPROPERTY(EditAnywhere, NoClear, Transient)
	TMap<EOverlayTabs, TSoftClassPtr<UUMGSettingContextWidget>> _overlayContextWidgetMap;

private:
	UPROPERTY(Transient, Export)
	TMap<EOverlayTabs, UUMGSettingContextWidget*> _contextWidgetMap;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void ShowCreditsOrConsentsPopup(const FString& title, const FString& content);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetRightTopTextInfo(const FText& title, const FString& content, ESlateVisibility textVisibility);

	UFUNCTION()
	void HandleSurvivorCameraSensitivityChanged(int32 value);

	UFUNCTION()
	void HandleSettingTabClick(int32 tabIndex);

	UFUNCTION(BlueprintCallable)
	void HandleLeaveButtonClick();

	UFUNCTION()
	void HandleLanguageButtonClick(int32 index);

	UFUNCTION()
	void HandleKillerCameraSensitivityChanged(int32 value);

	UFUNCTION()
	void HandleInvertYToggleClick(bool toggleValue);

	UFUNCTION()
	void HandleInteractionButtonToggleClick(int32 index);

	UFUNCTION()
	void HandleHandSideToggleClick(int32 index);

	UFUNCTION(BlueprintCallable)
	void HandleContextButtonClickEvent(int32 index);

	UFUNCTION()
	void HandleAlwaysDisplayButtonClick(int32 tabIndex);

	UFUNCTION()
	void HandleAimAssistToggleClick(bool toggleValue);

public:
	UUMGAtlantaSettingScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaSettingScreen) { return 0; }
