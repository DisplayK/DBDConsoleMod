#pragma once

#include "CoreMinimal.h"
#include "UMGBasePassStorefrontWidget.h"
#include "UMGAtlPassStorefrontWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAtlPassStorefrontWidget : public UUMGBasePassStorefrontWidget
{
	GENERATED_BODY()

public:
	UUMGAtlPassStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlPassStorefrontWidget) { return 0; }
