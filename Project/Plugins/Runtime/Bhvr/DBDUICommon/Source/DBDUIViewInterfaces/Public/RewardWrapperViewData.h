#pragma once

#include "CoreMinimal.h"
#include "ERewardType.h"
#include "CurrencyProgressionRewardViewData.h"
#include "CharacterRewardViewData.h"
#include "CustomizationRewardViewData.h"
#include "RewardWrapperViewData.generated.h"

USTRUCT(BlueprintType)
struct FRewardWrapperViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ERewardType RewardType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterRewardViewData CharacterRewardViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCurrencyProgressionRewardViewData CurrencyProgressionRewardViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomizationRewardViewData CustomizationRewardViewData;

public:
	DBDUIVIEWINTERFACES_API FRewardWrapperViewData();
};

FORCEINLINE uint32 GetTypeHash(const FRewardWrapperViewData) { return 0; }
