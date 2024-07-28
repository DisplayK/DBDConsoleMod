#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "CustomizationValidationCommandlet.generated.h"

UCLASS(NonTransient)
class UCustomizationValidationCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UCustomizationValidationCommandlet();
};

FORCEINLINE uint32 GetTypeHash(const UCustomizationValidationCommandlet) { return 0; }
