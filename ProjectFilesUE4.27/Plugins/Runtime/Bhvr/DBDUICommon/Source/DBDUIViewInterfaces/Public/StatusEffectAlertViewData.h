#pragma once

#include "CoreMinimal.h"
#include "ItemViewData.h"
#include "EStatusEffectType.h"
#include "AddonViewData.h"
#include "PerkViewData.h"
#include "UObject/SoftObjectPtr.h"
#include "EHudStatusEffectAlertViewType.h"
#include "StatusEffectAlertViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FStatusEffectAlertViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StatusEffectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> StatusEffectIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatusEffectType StatusEffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHudStatusEffectAlertViewType SourceViewType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPerkViewData PerkViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemViewData ItemViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAddonViewData AddonViewData;

public:
	DBDUIVIEWINTERFACES_API FStatusEffectAlertViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStatusEffectAlertViewData) { return 0; }
