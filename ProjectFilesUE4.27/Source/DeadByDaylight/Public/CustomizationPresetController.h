#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizationPresetController.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UCustomizationPresetController : public UObject
{
	GENERATED_BODY()

public:
	UCustomizationPresetController();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationPresetController) { return 0; }
