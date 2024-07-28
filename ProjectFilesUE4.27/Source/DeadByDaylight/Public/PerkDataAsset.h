#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierContainerDataAsset.h"
#include "PerkDataAsset.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPerkDataAsset : public UGameplayModifierContainerDataAsset
{
	GENERATED_BODY()

public:
	UPerkDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UPerkDataAsset) { return 0; }
