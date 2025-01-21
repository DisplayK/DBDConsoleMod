#pragma once

#include "CoreMinimal.h"
#include "AkWwiseObjectDetails.generated.h"

USTRUCT(BlueprintType)
struct FAkWwiseObjectDetails
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString ItemName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString ItemPath;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString ItemId;

public:
	AKAUDIO_API FAkWwiseObjectDetails();
};

FORCEINLINE uint32 GetTypeHash(const FAkWwiseObjectDetails) { return 0; }
