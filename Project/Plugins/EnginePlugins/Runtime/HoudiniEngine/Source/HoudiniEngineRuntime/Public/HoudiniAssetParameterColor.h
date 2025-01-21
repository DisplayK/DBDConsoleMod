#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterColor.generated.h"

UCLASS()
class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterColor();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterColor) { return 0; }
