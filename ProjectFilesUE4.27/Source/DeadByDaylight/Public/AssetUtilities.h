#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AssetUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UAssetUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UAssetUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UAssetUtilities) { return 0; }
