#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterRamp.generated.h"

UCLASS()
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterRamp();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterRamp) { return 0; }
