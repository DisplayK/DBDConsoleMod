#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterMultiparm.generated.h"

UCLASS()
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterMultiparm();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterMultiparm) { return 0; }
