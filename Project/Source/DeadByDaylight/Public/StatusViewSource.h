#pragma once

#include "CoreMinimal.h"
#include "EInventoryItemType.h"
#include "StatusViewSource.generated.h"

USTRUCT(BlueprintType)
struct FStatusViewSource
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SourceID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _remainingTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentageFill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInventoryItemType SourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SourceIconIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SourceLevel;

public:
	DEADBYDAYLIGHT_API FStatusViewSource();
};

FORCEINLINE uint32 GetTypeHash(const FStatusViewSource) { return 0; }
