#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIComponent.generated.h"

UCLASS(Abstract, DefaultToInstanced, EditInlineNew)
class DBDUIPRESENTERS_API UUIComponent : public UObject
{
	GENERATED_BODY()

public:
	UUIComponent();
};

FORCEINLINE uint32 GetTypeHash(const UUIComponent) { return 0; }
