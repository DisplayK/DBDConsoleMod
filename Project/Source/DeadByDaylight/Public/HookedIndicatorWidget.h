#pragma once

#include "CoreMinimal.h"
#include "BaseIndicatorWidget.h"
#include "HookedIndicatorWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UHookedIndicatorWidget : public UBaseIndicatorWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float HookedIndicatorDuration;

public:
	UHookedIndicatorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UHookedIndicatorWidget) { return 0; }
