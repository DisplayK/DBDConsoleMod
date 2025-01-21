#pragma once

#include "CoreMinimal.h"
#include "UIComponent.h"
#include "FocusHandler.generated.h"

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UFocusHandler : public UUIComponent
{
	GENERATED_BODY()

public:
	UFocusHandler();
};

FORCEINLINE uint32 GetTypeHash(const UFocusHandler) { return 0; }
