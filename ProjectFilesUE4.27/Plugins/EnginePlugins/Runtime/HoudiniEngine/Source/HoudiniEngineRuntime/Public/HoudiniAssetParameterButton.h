#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterButton.generated.h"

UCLASS()
class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterButton();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterButton) { return 0; }
