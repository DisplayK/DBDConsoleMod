#pragma once

#include "CoreMinimal.h"
#include "BaseLoadoutPartViewData.h"
#include "EStatusEffectType.h"
#include "PerkViewData.generated.h"

USTRUCT(BlueprintType)
struct FPerkViewData: public FBaseLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Cooldown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatusEffectType StatusEffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StackCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsRechargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsRechargeableActive;

public:
	DBDUIVIEWINTERFACES_API FPerkViewData();
};

FORCEINLINE uint32 GetTypeHash(const FPerkViewData) { return 0; }
