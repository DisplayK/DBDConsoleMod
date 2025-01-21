#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ASColorTransform.generated.h"

USTRUCT(BlueprintType)
struct FASColorTransform
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FLinearColor Multiply;

	UPROPERTY(BlueprintReadWrite)
	FLinearColor Add;

public:
	SCALEFORMUI_API FASColorTransform();
};

FORCEINLINE uint32 GetTypeHash(const FASColorTransform) { return 0; }
