#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "DBDAssetManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	UDBDAssetManager();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAssetManager) { return 0; }
