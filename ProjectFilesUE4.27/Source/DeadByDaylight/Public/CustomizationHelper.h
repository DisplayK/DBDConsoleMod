#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizationHelper.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UCustomizationHelper : public UObject
{
	GENERATED_BODY()

public:
	UCustomizationHelper();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationHelper) { return 0; }
