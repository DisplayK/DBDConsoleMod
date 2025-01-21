#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/NoExportTypes.h"
#include "CoreTabWidget.generated.h"

class UWidget;
class UDBDTextBlock;
class UDBDImage;
class UTexture2D;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTabWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TabTextField;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* TabImage;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UWidget* NotificationWidget;

	UPROPERTY(BlueprintReadOnly)
	FText LabelTooltipText;

public:
	UFUNCTION(BlueprintCallable)
	void SetNotificationVisibility(bool hasNotification);

	UFUNCTION(BlueprintCallable)
	void SetIconTexture(UTexture2D* iconTexture, const FVector2D forcedIconSize);

	UFUNCTION(BlueprintCallable)
	void SetIconSoftTexture(TSoftObjectPtr<UTexture2D> iconTexture, const FVector2D forcedIconSize);

	UFUNCTION(BlueprintImplementableEvent)
	void PostInit();

	UFUNCTION(BlueprintCallable)
	bool HasLabelTooltip();

	UFUNCTION(BlueprintPure)
	FText GetTabText() const;

	UFUNCTION(BlueprintPure)
	int32 GetKey() const;

public:
	UCoreTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTabWidget) { return 0; }
