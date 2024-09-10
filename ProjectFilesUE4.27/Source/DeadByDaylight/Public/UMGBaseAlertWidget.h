#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGBaseAlertWidget.generated.h"

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBaseAlertWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UUMGBaseAlertWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseAlertWidget) { return 0; }
