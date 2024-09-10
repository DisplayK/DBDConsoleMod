#pragma once

#include "CoreMinimal.h"
#include "EDragZoneAxis.h"
#include "Input/Events.h"
#include "OnDragEvent.h"
#include "Blueprint/UserWidget.h"
#include "DragZone.generated.h"

class UBorder;
class UDBDButton;

UCLASS(EditInlineNew)
class UDragZone : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnDragEvent OnDragDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DeadZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDragZoneAxis Axis;

	UPROPERTY(BlueprintReadOnly, Export)
	UBorder* DebugPreview;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDButton* HitzoneButton;

private:
	UFUNCTION()
	void OnMouseReleaseGlobal(const FPointerEvent& mouseEvent);

	UFUNCTION()
	void OnMousePressHitzone();

	UFUNCTION()
	void OnMousePressGlobal(const FPointerEvent& mouseEvent);

	UFUNCTION()
	void OnMouseMoveGlobal(const FPointerEvent& mouseEvent);

	UFUNCTION()
	void OnMouseHoverHitzone();

	UFUNCTION()
	void OnAnalogInput(const FAnalogInputEvent& analogEvent);

public:
	UDragZone();
};

FORCEINLINE uint32 GetTypeHash(const UDragZone) { return 0; }
