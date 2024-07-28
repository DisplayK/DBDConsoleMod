#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDTableRowBaseWithId.h"
#include "EArchivesEventStyle.h"
#include "ArchiveDefinition.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FArchiveDefinition: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString PurchasePassPicturePath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString PurchaseTierPicturePath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText PurchasePassPopupMessage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EArchivesEventStyle EventStyle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UTexture2D> StoryBookMarkTexture;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString StyleFrameLabel;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString EventStoryLabel;

public:
	DEADBYDAYLIGHT_API FArchiveDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveDefinition) { return 0; }
