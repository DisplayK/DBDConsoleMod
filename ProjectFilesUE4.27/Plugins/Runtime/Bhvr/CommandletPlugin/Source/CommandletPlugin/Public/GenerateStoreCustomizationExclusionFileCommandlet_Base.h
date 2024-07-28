#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GenerateStoreCustomizationExclusionFileCommandlet_Base.generated.h"

UCLASS()
class UGenerateStoreCustomizationExclusionFileCommandlet_Base : public UObject
{
	GENERATED_BODY()

public:
	UGenerateStoreCustomizationExclusionFileCommandlet_Base();
};

FORCEINLINE uint32 GetTypeHash(const UGenerateStoreCustomizationExclusionFileCommandlet_Base) { return 0; }
