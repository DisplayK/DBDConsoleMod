#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaEventsElement.generated.h"

class UVerticalBox;
class UUMGPromoPackItemWidget;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaEventsElement : public UMobileBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UVerticalBox* ImageBox;

	UPROPERTY(Export)
	UTextBlock* ElementName;

	UPROPERTY(Export)
	UUMGPromoPackItemWidget* CustomizationWidget;

public:
	UUMGAtlantaEventsElement();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaEventsElement) { return 0; }
