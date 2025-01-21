#pragma once

#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Framework/Text/TextLayout.h"
#include "EButtonWidgetVisibility.h"
#include "CoreBaseUserWidget.h"
#include "EAnalogCursorStickiness.h"
#include "CoreButtonWidget.generated.h"

class UDBDTextBlock;
class UAkAudioEvent;
class UDBDButton;
class UCoreButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreButtonWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnhoveredDelegate, UCoreButtonWidget*, buttonTarget);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReleasedDelegate, UCoreButtonWidget*, buttonTarget);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPressedDelegate, UCoreButtonWidget*, buttonTarget);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoveredDelegate, UCoreButtonWidget*, buttonTarget);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClickedDelegate, UCoreButtonWidget*, buttonTarget);

public:
	UPROPERTY(BlueprintAssignable)
	FOnHoveredDelegate OnHoveredDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnUnhoveredDelegate OnUnhoveredDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnPressedDelegate OnPressedDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnReleasedDelegate OnReleasedDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnClickedDelegate OnClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HoveredSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* HoveredSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PressedSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* PressedSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ClickedSfxName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* ClickedSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAnalogCursorStickiness AnalogCursorStickiness;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDButton* HitzoneButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* LabelTB;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	TEnumAsByte<ETextJustify::Type> _alignment;

private:
	UPROPERTY(EditInstanceOnly)
	bool SendAnalyticsData;

	UPROPERTY(EditInstanceOnly)
	FString AnalyticsName;

public:
	UFUNCTION(BlueprintCallable)
	void SetVisible(EButtonWidgetVisibility visible);

	UFUNCTION(BlueprintCallable)
	void SetPressable(bool isPressable);

	UFUNCTION(BlueprintCallable)
	void SetLabel(const FText& label);

	UFUNCTION(BlueprintCallable)
	void SetHoverable(bool isHoverable);

	UFUNCTION(BlueprintCallable)
	void SetHoldable(bool isHoldable);

	UFUNCTION(BlueprintCallable)
	void SetEnabled(bool isEnabled);

	UFUNCTION(BlueprintCallable)
	void SetClickable(bool isClickable);

	UFUNCTION(BlueprintCallable)
	void SetChargeable(bool isChargeable);

	UFUNCTION(BlueprintCallable)
	void SetAlignment(ETextJustify::Type newAlignment);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnUnhovered();

	UFUNCTION(BlueprintImplementableEvent)
	void OnReleased();

	UFUNCTION(BlueprintImplementableEvent)
	void OnPressed();

	UFUNCTION()
	void OnInternalUnhovered();

	UFUNCTION()
	void OnInternalReleased();

	UFUNCTION()
	void OnInternalPressed();

	UFUNCTION()
	void OnInternalHovered();

	UFUNCTION()
	void OnInternalClicked();

	UFUNCTION(BlueprintImplementableEvent)
	void OnHovered();

	UFUNCTION(BlueprintImplementableEvent)
	void OnEnabledChanged(bool isEnabled);

	UFUNCTION(BlueprintImplementableEvent)
	void OnClicked();

	UFUNCTION(BlueprintImplementableEvent)
	void OnAlignmentChanged(ETextJustify::Type newAlignment);

public:
	UFUNCTION(BlueprintPure)
	bool IsEnabled() const;

	UFUNCTION(BlueprintPure)
	FGeometry GetHitzonePaintSpaceGeometry() const;

public:
	UCoreButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreButtonWidget) { return 0; }
