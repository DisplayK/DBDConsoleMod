#pragma once

#include "CoreMinimal.h"
#include "SpecialEventEntryPopupData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventEntryPopupData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FText Title;

	UPROPERTY(EditAnywhere)
	FText Description;

	UPROPERTY(EditAnywhere)
	FString ImagePath;

	UPROPERTY(EditAnywhere)
	FText ImageBannerText;

public:
	DEADBYDAYLIGHT_API FSpecialEventEntryPopupData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventEntryPopupData) { return 0; }
