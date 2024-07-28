#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnSaveGamePopupComplete.h"
#include "OnScreenTouched.h"
#include "UMGSplashScreen.generated.h"

class UUMGCharacterSlideShowWidget;
class UTextBlock;
class UButton;
class UUMGDownloadProgressionWidget;
class UCanvasPanel;

UCLASS(EditInlineNew)
class UUMGSplashScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnSaveGamePopupComplete OnSaveGamePopupCompleteEvent;

	UPROPERTY(BlueprintAssignable)
	FOnScreenTouched OnScreenTouched;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* SavePopup;

private:
	UPROPERTY(Export)
	UTextBlock* GameVersion;

	UPROPERTY(Export)
	UTextBlock* LoadingState;

	UPROPERTY(Export)
	UTextBlock* PressKey;

	UPROPERTY(Export)
	UButton* TapButton;

	UPROPERTY(Export)
	UTextBlock* SaveGameTitle;

	UPROPERTY(Export)
	UTextBlock* SaveGameDescription;

	UPROPERTY(Export)
	UUMGDownloadProgressionWidget* DownloadProgression;

	UPROPERTY(Export)
	UUMGCharacterSlideShowWidget* CharacterSlideShow;

private:
	UFUNCTION()
	void OnTapButtonClicked();

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void OnSaveGamePopupComplete() const;

public:
	UUMGSplashScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSplashScreen) { return 0; }
