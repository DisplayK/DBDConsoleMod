#pragma once

#include "CoreMinimal.h"
#include "ItemsAssetLibrary.h"
#include "CharacterItemsAssetLibrary.generated.h"

UCLASS()
class UCharacterItemsAssetLibrary : public UItemsAssetLibrary
{
	GENERATED_BODY()

public:
	UCharacterItemsAssetLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterItemsAssetLibrary) { return 0; }
