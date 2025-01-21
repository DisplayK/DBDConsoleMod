#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "PerkSoundHudWidget.generated.h"

class UHorizontalBox;

UCLASS(Abstract, EditInlineNew)
class UPerkSoundHudWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* PerkIcons;

public:
	UPerkSoundHudWidget();
};

FORCEINLINE uint32 GetTypeHash(const UPerkSoundHudWidget) { return 0; }
