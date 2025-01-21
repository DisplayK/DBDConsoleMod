#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterFloat.generated.h"

UCLASS()
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterFloat();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterFloat) { return 0; }
