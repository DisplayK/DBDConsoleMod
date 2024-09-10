#pragma once

#include "CoreMinimal.h"
#include "BaseLoadoutPartViewData.h"
#include "EStatusEffectType.h"
#include "ELoadoutPartState.h"
#include "AddonViewData.generated.h"

USTRUCT(BlueprintType)
struct FAddonViewData: public FBaseLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float Cooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStatusEffectType StatusEffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 StackCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ELoadoutPartState LoadoutPartState;

public:
	DBDUIVIEWINTERFACES_API FAddonViewData();
};

FORCEINLINE uint32 GetTypeHash(const FAddonViewData) { return 0; }
