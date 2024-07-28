#pragma once

#include "CoreMinimal.h"
#include "ItemUIData.h"
#include "BundleData.generated.h"

USTRUCT()
struct FBundleData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName ID;

	UPROPERTY(EditAnywhere)
	FItemUIData UIData;

public:
	DEADBYDAYLIGHT_API FBundleData();
};

FORCEINLINE uint32 GetTypeHash(const FBundleData) { return 0; }
