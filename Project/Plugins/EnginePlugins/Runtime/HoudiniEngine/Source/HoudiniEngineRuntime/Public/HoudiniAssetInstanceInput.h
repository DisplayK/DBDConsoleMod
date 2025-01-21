#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetInstanceInput.generated.h"

UCLASS()
class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetInstanceInput();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetInstanceInput) { return 0; }
