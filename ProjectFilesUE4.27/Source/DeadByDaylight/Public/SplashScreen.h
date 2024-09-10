#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "SpecialEventUIInfo.h"
#include "SplashScreen.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USplashScreen : public UScreenBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void UpdateLoadingProgression(const FString& loadingProgression) const;

	UFUNCTION()
	void ShowSpecialEventVisual(const FSpecialEventUIInfo& eventInfo) const;

	UFUNCTION()
	void ShowSaveGamePopup() const;

	UFUNCTION()
	void ShowPressKeyState() const;

	UFUNCTION()
	void ShowLoadingState() const;

	UFUNCTION()
	void SetVersionText(const FString& versionText) const;

protected:
	UFUNCTION()
	void OnSaveGamePopupComplete();

public:
	UFUNCTION()
	void HidePressKeyState() const;

public:
	USplashScreen();
};

FORCEINLINE uint32 GetTypeHash(const USplashScreen) { return 0; }
