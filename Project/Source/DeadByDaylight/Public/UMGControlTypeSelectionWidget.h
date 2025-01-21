#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EAtlantaControlTypeSetting.h"
#include "UMGControlTypeSelectionWidget.generated.h"

class UTextBlock;
class UUMGControlTypeWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGControlTypeSelectionWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UUMGControlTypeWidget* SnapOnJoystick;

	UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UUMGControlTypeWidget* CameraFullScreen;

	UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* TitleText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateControlType(EAtlantaControlTypeSetting controlType);

public:
	UUMGControlTypeSelectionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGControlTypeSelectionWidget) { return 0; }
