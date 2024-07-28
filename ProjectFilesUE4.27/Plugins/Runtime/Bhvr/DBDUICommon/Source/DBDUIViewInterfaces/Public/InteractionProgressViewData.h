#pragma once

#include "CoreMinimal.h"
#include "StatusEffectViewData.h"
#include "UObject/SoftObjectPtr.h"
#include "EBarColor.h"
#include "InteractionProgressViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FInteractionProgressViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Message;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SecondaryMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBarColor BarColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBarColor ChargeBarColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowIconCharge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStatusEffectViewData> Proficiencies;

public:
	DBDUIVIEWINTERFACES_API FInteractionProgressViewData();
};

FORCEINLINE uint32 GetTypeHash(const FInteractionProgressViewData) { return 0; }
