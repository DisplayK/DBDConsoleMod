#pragma once

#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "RewardItemData.h"
#include "UMGAtlantaLevelUpPopup.generated.h"

UCLASS(EditInlineNew)
class UUMGAtlantaLevelUpPopup : public UUMGGenericPopup
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnSetData(int32 level, int32 prestige, bool prestigeIncreased, const TArray<FRewardItemData>& rewards);

public:
	UUMGAtlantaLevelUpPopup();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaLevelUpPopup) { return 0; }
