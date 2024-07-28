#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LandingPageStorefrontTabData.generated.h"

class UTexture2DDynamic;

USTRUCT()
struct FLandingPageStorefrontTabData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString Type;

	UPROPERTY(Transient)
	FDateTime NewStartDate;

	UPROPERTY(Transient)
	FDateTime NewEndDate;

	UPROPERTY(Transient)
	UTexture2DDynamic* Image;

	UPROPERTY(Transient)
	FText Title;

	UPROPERTY(Transient)
	FText TagText;

public:
	DEADBYDAYLIGHT_API FLandingPageStorefrontTabData();
};

FORCEINLINE uint32 GetTypeHash(const FLandingPageStorefrontTabData) { return 0; }
