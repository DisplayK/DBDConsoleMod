#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaHudLookBackJoystick.generated.h"

class UGridPanel;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UAtlantaHudLookBackJoystick : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UGridPanel* TutorialAnimContainer;

public:
	UAtlantaHudLookBackJoystick();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaHudLookBackJoystick) { return 0; }
