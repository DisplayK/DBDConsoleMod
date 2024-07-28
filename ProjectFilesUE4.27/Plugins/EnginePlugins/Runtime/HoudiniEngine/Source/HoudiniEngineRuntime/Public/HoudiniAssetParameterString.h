#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterString.generated.h"

UCLASS()
class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterString();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterString) { return 0; }
