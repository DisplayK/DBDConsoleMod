#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "RewardLayoutWidgetToGenerate.generated.h"

class UUserWidget;
class UUMGRewardSlotTutorialPopupRewardWidget;

USTRUCT(BlueprintType)
struct FRewardLayoutWidgetToGenerate
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftClassPtr<UUMGRewardSlotTutorialPopupRewardWidget> CharacterRewardWidget;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftClassPtr<UUMGRewardSlotTutorialPopupRewardWidget> CurrencyRewardWidget;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSoftClassPtr<UUserWidget> SpacerWidget;

public:
	DEADBYDAYLIGHT_API FRewardLayoutWidgetToGenerate();
};

FORCEINLINE uint32 GetTypeHash(const FRewardLayoutWidgetToGenerate) { return 0; }
