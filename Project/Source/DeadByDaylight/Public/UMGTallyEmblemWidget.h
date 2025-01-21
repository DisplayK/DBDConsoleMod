#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EEmblemQuality.h"
#include "UMGTallyEmblemWidget.generated.h"

class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class UUMGTallyEmblemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TMap<EEmblemQuality, UTexture2D*> _emblemBackgrounds;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* BackgroundImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* IconImage;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayFadeInAnimation();

public:
	UUMGTallyEmblemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyEmblemWidget) { return 0; }
