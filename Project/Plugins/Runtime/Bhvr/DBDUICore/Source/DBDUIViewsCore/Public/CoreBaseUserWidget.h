#pragma once

#include "CoreMinimal.h"
#include "CoreBaseViewInterface.h"
#include "EControlMode.h"
#include "EScaleType.h"
#include "InteractiveWidgetInterface.h"
#include "Blueprint/UserWidget.h"
#include "CoreBaseUserWidget.generated.h"

class UWidgetAnimation;
class UDBDInputManager;
class UScaleBox;

UCLASS(Abstract, EditInlineNew)
class UCoreBaseUserWidget : public UUserWidget, public ICoreBaseViewInterface, public IInteractiveWidgetInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UScaleBox* ScaleContainer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	bool IsInteractive;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EControlMode _controlMode;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EScaleType ScaleType;

private:
	UPROPERTY(Transient)
	UDBDInputManager* _inputManager;

	UPROPERTY(Transient)
	TMap<FName, UWidgetAnimation*> _animationMap;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateScale(float scale);

	UFUNCTION(BlueprintCallable)
	void RegisterForInput();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnControlModeChangedBP(EControlMode controlMode);

public:
	UFUNCTION(BlueprintCallable)
	void DeregisterFromInput();

public:
	UCoreBaseUserWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreBaseUserWidget) { return 0; }
