#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlipbookSettings.generated.h"

USTRUCT(BlueprintType)
struct FFlipbookSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfViews;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ViewDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector UpVector;

	UPROPERTY()
	float VerticalAngle;

public:
	SIMPLYGONUOBJECTS_API FFlipbookSettings();
};

FORCEINLINE uint32 GetTypeHash(const FFlipbookSettings) { return 0; }
