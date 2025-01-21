#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "UObject/SoftObjectPtr.h"
#include "EventEntryPopupViewData.generated.h"

class UTexture2D;

UCLASS()
class DBDUIVIEWINTERFACES_API UEventEntryPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText AvailabilityDates;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EventFrameLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ImageBannerText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> ImageTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldShowEventTomeButton;

public:
	UEventEntryPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryPopupViewData) { return 0; }
