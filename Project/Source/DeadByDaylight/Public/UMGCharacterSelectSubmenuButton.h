#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGCharacterSelectSubmenuButton.generated.h"

class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGCharacterSelectSubmenuButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* NotificationPanel;

public:
	UUMGCharacterSelectSubmenuButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterSelectSubmenuButton) { return 0; }
