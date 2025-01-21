#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierContainerDataAsset.h"
#include "ItemAddonDataAsset.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UItemAddonDataAsset : public UGameplayModifierContainerDataAsset
{
	GENERATED_BODY()

public:
	UItemAddonDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UItemAddonDataAsset) { return 0; }
