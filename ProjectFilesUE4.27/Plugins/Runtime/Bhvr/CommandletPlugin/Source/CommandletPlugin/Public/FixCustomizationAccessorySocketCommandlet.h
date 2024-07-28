#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "FixCustomizationAccessorySocketCommandlet.generated.h"

UCLASS(NonTransient)
class UFixCustomizationAccessorySocketCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UFixCustomizationAccessorySocketCommandlet();
};

FORCEINLINE uint32 GetTypeHash(const UFixCustomizationAccessorySocketCommandlet) { return 0; }
