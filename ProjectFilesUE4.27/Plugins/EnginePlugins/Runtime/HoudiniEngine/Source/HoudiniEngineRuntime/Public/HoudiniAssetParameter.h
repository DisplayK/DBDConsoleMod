#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniAssetParameter.generated.h"

UCLASS()
class UHoudiniAssetParameter : public UObject
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameter();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameter) { return 0; }
