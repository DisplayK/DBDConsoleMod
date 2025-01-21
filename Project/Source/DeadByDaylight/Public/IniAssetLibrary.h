#pragma once

#include "CoreMinimal.h"
#include "AssetLibrary.h"
#include "IniAssetLibrary.generated.h"

UCLASS()
class UIniAssetLibrary : public UAssetLibrary
{
	GENERATED_BODY()

public:
	UIniAssetLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UIniAssetLibrary) { return 0; }
