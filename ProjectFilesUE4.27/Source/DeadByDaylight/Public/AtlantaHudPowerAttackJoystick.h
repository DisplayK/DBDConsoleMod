#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaHudPowerAttackJoystick.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UAtlantaHudPowerAttackJoystick : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* AnimationContainer;

	UPROPERTY(EditDefaultsOnly)
	FName _availableAnimationName;

	UPROPERTY(EditDefaultsOnly)
	FName _fadeOutAnimationName;

	UPROPERTY(EditDefaultsOnly)
	FName _tutoStartAnimationName;

	UPROPERTY(EditDefaultsOnly)
	FName _tutoLoopAnimationName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* Icon;

protected:
	UFUNCTION()
	void OnFinishedTutorialAnimationIn();

	UFUNCTION()
	void OnFinishedAvailableAnimation();

public:
	UAtlantaHudPowerAttackJoystick();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaHudPowerAttackJoystick) { return 0; }
