#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterFolder.generated.h"

UCLASS()
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterFolder();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterFolder) { return 0; }
