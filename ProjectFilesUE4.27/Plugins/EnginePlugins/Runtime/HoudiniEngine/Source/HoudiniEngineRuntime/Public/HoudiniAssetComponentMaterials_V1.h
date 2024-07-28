#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniAssetComponentMaterials_V1.generated.h"

UCLASS()
class UHoudiniAssetComponentMaterials_V1 : public UObject
{
	GENERATED_BODY()

public:
	UHoudiniAssetComponentMaterials_V1();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetComponentMaterials_V1) { return 0; }
