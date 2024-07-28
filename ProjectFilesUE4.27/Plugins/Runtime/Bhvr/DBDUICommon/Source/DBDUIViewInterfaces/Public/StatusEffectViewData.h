#pragma once

#include "CoreMinimal.h"
#include "EStatusEffectType.h"
#include "UObject/SoftObjectPtr.h"
#include "StatusEffectViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FStatusEffectViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> IconTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatusEffectType StatusEffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Percentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PlayIntroAnimation;

public:
	DBDUIVIEWINTERFACES_API FStatusEffectViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStatusEffectViewData) { return 0; }
