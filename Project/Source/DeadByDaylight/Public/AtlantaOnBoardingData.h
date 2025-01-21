#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "AtlantaOnBoardingData.generated.h"

USTRUCT()
struct FAtlantaOnBoardingData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName OnBoardingId;

	UPROPERTY(EditAnywhere)
	FText Title;

	UPROPERTY(EditAnywhere)
	FText Description;

public:
	DEADBYDAYLIGHT_API FAtlantaOnBoardingData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaOnBoardingData) { return 0; }
