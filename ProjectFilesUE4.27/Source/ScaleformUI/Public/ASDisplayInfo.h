#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FASDisplayInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FVector Position;

	UPROPERTY(BlueprintReadWrite)
	FVector Scale;

	UPROPERTY(BlueprintReadWrite)
	float Rotation;

	UPROPERTY(BlueprintReadWrite)
	float XRotation;

	UPROPERTY(BlueprintReadWrite)
	float YRotation;

	UPROPERTY(BlueprintReadWrite)
	float Alpha;

	UPROPERTY(BlueprintReadWrite)
	bool Visible;

public:
	SCALEFORMUI_API FASDisplayInfo();
};

FORCEINLINE uint32 GetTypeHash(const FASDisplayInfo) { return 0; }
