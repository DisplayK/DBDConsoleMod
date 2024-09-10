#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBaseStorefrontWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UUMGBaseStorefrontWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UUMGBaseStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseStorefrontWidget) { return 0; }
