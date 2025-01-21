#pragma once

#include "CoreMinimal.h"
#include "ItemData.h"
#include "UObject/SoftObjectPtr.h"
#include "ParentItemIDs.h"
#include "ItemAddonProperties.generated.h"

class UItemAddon;

USTRUCT(BlueprintType)
struct FItemAddonProperties: public FItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UItemAddon> ItemAddonBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FParentItemIDs ParentItem;

	UPROPERTY(EditAnywhere)
	TArray<FName> PreLevelGenerationModifierID;

public:
	DEADBYDAYLIGHT_API FItemAddonProperties();
};

FORCEINLINE uint32 GetTypeHash(const FItemAddonProperties) { return 0; }
