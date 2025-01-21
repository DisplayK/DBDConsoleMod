#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterToggle.generated.h"

UCLASS()
class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterToggle();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterToggle) { return 0; }
