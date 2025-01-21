#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "SubscriptionUIData.generated.h"

class UTexture2D;

USTRUCT()
struct FSubscriptionUIData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FText DisplayName;

	UPROPERTY(EditAnywhere)
	FText Description;

	UPROPERTY(EditAnywhere)
	TMap<FName, FText> PlatformDetails;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> TitleTexture;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> PortraitBorderTexture;

public:
	DEADBYDAYLIGHT_API FSubscriptionUIData();
};

FORCEINLINE uint32 GetTypeHash(const FSubscriptionUIData) { return 0; }
