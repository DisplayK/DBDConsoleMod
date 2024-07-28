#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterFile.generated.h"

UCLASS()
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterFile();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterFile) { return 0; }
