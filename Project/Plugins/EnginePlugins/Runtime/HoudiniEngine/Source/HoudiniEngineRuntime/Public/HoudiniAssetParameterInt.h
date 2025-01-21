#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterInt.generated.h"

UCLASS()
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterInt();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterInt) { return 0; }
