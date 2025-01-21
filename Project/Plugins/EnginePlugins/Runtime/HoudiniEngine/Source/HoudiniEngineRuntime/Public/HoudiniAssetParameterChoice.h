#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterChoice.generated.h"

UCLASS()
class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterChoice();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterChoice) { return 0; }
