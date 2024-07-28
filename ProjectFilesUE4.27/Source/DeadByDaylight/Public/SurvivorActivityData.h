#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SurvivorActivity.h"
#include "SurvivorActivityData.generated.h"

UCLASS(BlueprintType)
class USurvivorActivityData : public UDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FSurvivorActivity> _allPossibleActivities;

public:
	USurvivorActivityData();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorActivityData) { return 0; }
