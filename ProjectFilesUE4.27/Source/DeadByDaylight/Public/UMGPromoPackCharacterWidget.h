#pragma once

#include "CoreMinimal.h"
#include "UMGPromoPackItemWidget.h"
#include "UMGPromoPackCharacterWidget.generated.h"

class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGPromoPackCharacterWidget : public UUMGPromoPackItemWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* OwnedPanel;

public:
	UUMGPromoPackCharacterWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPromoPackCharacterWidget) { return 0; }
