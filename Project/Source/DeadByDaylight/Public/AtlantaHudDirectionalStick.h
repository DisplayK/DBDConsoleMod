#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaHudDirectionalStick.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UAtlantaHudDirectionalStick : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* JoystickAnimationPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ContainerToRotate;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* ArrowsContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* JoystickLockImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* JoystickOn;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* AutoRunContainer;

	UPROPERTY(Transient)
	bool _isMovementLockAnimationActive;

public:
	UFUNCTION(BlueprintCallable)
	void SetMovementLockAnimationStatus(bool value);

public:
	UAtlantaHudDirectionalStick();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaHudDirectionalStick) { return 0; }
