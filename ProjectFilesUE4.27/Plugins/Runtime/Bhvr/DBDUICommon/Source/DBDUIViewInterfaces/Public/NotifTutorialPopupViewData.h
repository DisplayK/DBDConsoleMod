#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "NotifTutorialPopupViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FNotifTutorialPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> Image;

public:
	DBDUIVIEWINTERFACES_API FNotifTutorialPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const FNotifTutorialPopupViewData) { return 0; }
