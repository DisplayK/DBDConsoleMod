#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetInput.generated.h"

UCLASS()
class UHoudiniAssetInput : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetInput();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetInput) { return 0; }
