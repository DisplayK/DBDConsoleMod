#pragma once

#include "CoreMinimal.h"
#include "EmblemQualityImages.h"
#include "MobileBaseUserWidget.h"
#include "EEmblemQuality.h"
#include "UMGTallyEmblemMarker.generated.h"

class UImage;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyEmblemMarker : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* QualityImage;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TMap<EEmblemQuality, FEmblemQualityImages> _qualityImages;

public:
	UUMGTallyEmblemMarker();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyEmblemMarker) { return 0; }
