#pragma once

#include "CoreMinimal.h"
#include "OnTallyScoreboardAddFriendEvent.h"
#include "UMGTallyListElementWidget.h"
#include "OnTallyScoreboardReportEvent.h"
#include "UMGTallyScoreboardWidget.generated.h"

class UUMGTallyScoreboardPlayerInfoWidget;

UCLASS(EditInlineNew)
class UUMGTallyScoreboardWidget : public UUMGTallyListElementWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnTallyScoreboardAddFriendEvent OnTallyScoreboardAddFriendEvent;

	UPROPERTY(BlueprintAssignable)
	FOnTallyScoreboardReportEvent OnTallyScoreboardReportEvent;

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	FText LabelTextRank;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText LabelTextScore;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText LabelTextStatus;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGTallyScoreboardPlayerInfoWidget* KillerWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGTallyScoreboardPlayerInfoWidget* FirstSurvivorWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGTallyScoreboardPlayerInfoWidget* SecondSurvivorWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGTallyScoreboardPlayerInfoWidget* ThirdSurvivorWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGTallyScoreboardPlayerInfoWidget* FourthSurvivorWidget;

private:
	UPROPERTY(Transient, Export)
	TArray<UUMGTallyScoreboardPlayerInfoWidget*> SurvivorWidgets;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetFadeOut();

public:
	UFUNCTION(BlueprintCallable)
	void HandleReportEvent(const FString& playerID);

	UFUNCTION(BlueprintCallable)
	void HandleAddFriendEvent(const FString& playerID);

public:
	UUMGTallyScoreboardWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyScoreboardWidget) { return 0; }
