#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "GenerateStoreCustomizationExclusionFileCommandlet.generated.h"

UCLASS(NonTransient)
class UGenerateStoreCustomizationExclusionFileCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UGenerateStoreCustomizationExclusionFileCommandlet();
};

FORCEINLINE uint32 GetTypeHash(const UGenerateStoreCustomizationExclusionFileCommandlet) { return 0; }
