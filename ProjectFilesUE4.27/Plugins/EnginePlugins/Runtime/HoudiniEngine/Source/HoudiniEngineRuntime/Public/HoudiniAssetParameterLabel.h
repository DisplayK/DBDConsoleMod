#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterLabel.generated.h"

UCLASS()
class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterLabel();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterLabel) { return 0; }
