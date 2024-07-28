#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "TutorialNotificationData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTutorialNotificationData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsShowAnalyticEnabled;

public:
	DEADBYDAYLIGHT_API FTutorialNotificationData();
};

FORCEINLINE uint32 GetTypeHash(const FTutorialNotificationData) { return 0; }
