#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterSeparator.generated.h"

UCLASS()
class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterSeparator();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterSeparator) { return 0; }
