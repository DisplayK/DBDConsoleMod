#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGBaseSideMainMenuButton.generated.h"

class UImage;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBaseSideMainMenuButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* NotificationBadge;

	UPROPERTY(EditInstanceOnly)
	float _baseTextOpacity;

	UPROPERTY(EditInstanceOnly)
	float _highlightTextOpacity;

	UPROPERTY(EditInstanceOnly)
	float _baseIconOpacity;

	UPROPERTY(EditInstanceOnly)
	float _highlightIconOpacity;

public:
	UUMGBaseSideMainMenuButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseSideMainMenuButton) { return 0; }
