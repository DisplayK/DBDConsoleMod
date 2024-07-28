#pragma once

#include "CoreMinimal.h"
#include "EventEntryPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "EventEntrySkinUpdate.h"
#include "EventEntryPopupWidget.generated.h"

class UDataTable;
class UDBDScrollBox;
class UDBDImage;
class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UEventEntryPopupWidget : public UCoreGenericPopupWidget, public IEventEntryPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* ImageContainer;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* TitleBanner;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* TitleImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* BackgroundImage;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDScrollBox* ScrollBox;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* EventDateText;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* AdditionalInformationText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* _eventSkinDataTable;

	UPROPERTY(BlueprintAssignable)
	FEventEntrySkinUpdate _eventEntrySkinUpdatedEvent;

protected:
	UFUNCTION()
	void setWidgetSkinFromEventLabel(const FText& eventLabel);

public:
	UEventEntryPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryPopupWidget) { return 0; }
