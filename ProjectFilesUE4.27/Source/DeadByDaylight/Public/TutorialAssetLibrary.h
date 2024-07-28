#pragma once

#include "CoreMinimal.h"
#include "AssetLibrary.h"
#include "TutorialAssetLibrary.generated.h"

UCLASS()
class UTutorialAssetLibrary : public UAssetLibrary
{
	GENERATED_BODY()

public:
	UTutorialAssetLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UTutorialAssetLibrary) { return 0; }
