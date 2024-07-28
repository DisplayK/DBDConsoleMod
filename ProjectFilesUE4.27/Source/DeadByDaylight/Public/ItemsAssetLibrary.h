#pragma once

#include "CoreMinimal.h"
#include "AssetLibrary.h"
#include "ItemsAssetLibrary.generated.h"

UCLASS()
class UItemsAssetLibrary : public UAssetLibrary
{
	GENERATED_BODY()

public:
	UItemsAssetLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UItemsAssetLibrary) { return 0; }
