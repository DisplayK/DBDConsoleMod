#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHudScreenIndicatorType.h"
#include "ScreenIndicatorViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FScreenIndicatorViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInFront;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D ScreenPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D ViewportSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* IndicatorIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHudScreenIndicatorType IndicatorType;

public:
	DBDUIVIEWINTERFACES_API FScreenIndicatorViewData();
};

FORCEINLINE uint32 GetTypeHash(const FScreenIndicatorViewData) { return 0; }
