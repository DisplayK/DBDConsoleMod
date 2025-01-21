#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "Framework/Text/TextLayout.h"
#include "EventEntryPopupSkinUIData.generated.h"

class UMaterialInstance;
class UTexture2D;

USTRUCT(BlueprintType)
struct FEventEntryPopupSkinUIData: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UMaterialInstance> AlternativeButtonMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> BackgroundTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> TitleBannerTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> TitleIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> EventImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> AlternativeButtonIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor HeaderColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor BaseColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ScrollBarColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D AlternativeButtonPositionOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextJustify::Type> AlternativeButtonAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsUsingBackgroundTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AlternativeButtonUsedHoverAnimation;

public:
	DBDUIVIEWINTERFACES_API FEventEntryPopupSkinUIData();
};

FORCEINLINE uint32 GetTypeHash(const FEventEntryPopupSkinUIData) { return 0; }
