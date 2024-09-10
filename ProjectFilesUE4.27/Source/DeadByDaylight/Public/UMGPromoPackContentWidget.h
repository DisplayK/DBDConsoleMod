#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGPromoPackContentWidget.generated.h"

class UHorizontalBox;
class UVerticalBox;
class UPromoPackContentDataAsset;
class UScrollBox;

UCLASS(Abstract, EditInlineNew)
class UUMGPromoPackContentWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* Content;

	UPROPERTY(EditDefaultsOnly)
	UPromoPackContentDataAsset* WidgetPerContentType;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UScrollBox* ScrollBox;

private:
	UPROPERTY(Transient, Export)
	TArray<TWeakObjectPtr<UVerticalBox>> _itemsContainer;

public:
	UUMGPromoPackContentWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPromoPackContentWidget) { return 0; }
