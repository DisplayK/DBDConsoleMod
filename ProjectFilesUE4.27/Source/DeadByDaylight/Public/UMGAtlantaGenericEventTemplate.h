#pragma once

#include "CoreMinimal.h"
#include "UMGAtlantaBaseEventsTemplate.h"
#include "Templates/SubclassOf.h"
#include "UMGAtlantaGenericEventTemplate.generated.h"

class UUMGAtlantaEventsElement;
class UHorizontalBox;
class UUMGPromoPackItemWidget;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaGenericEventTemplate : public UUMGAtlantaBaseEventsTemplate
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* RelatedItemsBox;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUMGAtlantaEventsElement> EventsElementWBPReference;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUMGPromoPackItemWidget> CustomizationWBPReference;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUMGPromoPackItemWidget> CharacterWBPReference;

public:
	UUMGAtlantaGenericEventTemplate();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaGenericEventTemplate) { return 0; }
