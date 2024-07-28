#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "UmgPlayableHud.h"
#include "UObject/NoExportTypes.h"
#include "UmgSurvivorHud.generated.h"

class UAtlantaHudLookBackJoystick;
class UCanvasPanel;
class UActionButton;
class UTexture2D;
class UWiggleWidget;
class ACamperPlayer;

UCLASS(Abstract, EditInlineNew)
class UUmgSurvivorHud : public UUmgPlayableHud
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UActionButton* CrouchButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* CrouchButtonContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWiggleWidget* StruggleWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* StruggleWidgetContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UWiggleWidget* WiggleWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* WiggleWidgetContainer;

	UPROPERTY(BlueprintReadOnly, Transient)
	ACamperPlayer* Survivor;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UActionButton* CancelButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* CenterInteractionButtonContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* LookBackButtonContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UAtlantaHudLookBackJoystick* LookBackJoystick;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UActionButton* SkillCheckButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* SkillCheckButtonCanvas;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* InsaneSkillCheckButtonCanvas;

private:
	UPROPERTY(EditDefaultsOnly)
	FSlateBrush _unpressedLookBackJoystickThumbImage;

	UPROPERTY(EditDefaultsOnly)
	FSlateBrush _pressedLookBackJoystickThumbImage;

	UPROPERTY(EditDefaultsOnly)
	FSlateBrush _unpressedLookBackJoystickBackgroundImage;

	UPROPERTY(EditDefaultsOnly)
	FSlateBrush _pressedLookBackJoystickBackgroundImage;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateCancelButton();

	UFUNCTION(BlueprintPure)
	bool ShouldUseContextualItemButton() const;

	UFUNCTION(BlueprintCallable)
	void SetSkillCheckButtonPosition(bool isInsane);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetNonRestrictedControlsVisibility(bool visible);

private:
	UFUNCTION(BlueprintCallable)
	void SetLookBackJoystickPosition(FVector2D& position);

	UFUNCTION(BlueprintCallable)
	void SetLookBackJoystickImage(bool pressed);

public:
	UFUNCTION()
	void RespondToVirtualJoystickPressChanged(int32 controlIndex, bool pressed);

private:
	UFUNCTION(BlueprintCallable)
	void OnCancelButtonClicked();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void InitializeLookBackJoystickPosition();

private:
	UFUNCTION(BlueprintPure)
	bool HasSecondaryActionAvailable() const;

	UFUNCTION(BlueprintCallable)
	FVector2D GetLookBackJoystickNormalizedOffset();

	UFUNCTION(BlueprintCallable)
	bool GetLookBackJoystickIsPressed();

	UFUNCTION(BlueprintPure)
	FText GetCenterItemText() const;

	UFUNCTION(BlueprintPure)
	UTexture2D* GetCenterItemIcon() const;

	UFUNCTION(BlueprintCallable)
	void CenterItemClicked(bool fromCancelRequest);

public:
	UUmgSurvivorHud();
};

FORCEINLINE uint32 GetTypeHash(const UUmgSurvivorHud) { return 0; }
