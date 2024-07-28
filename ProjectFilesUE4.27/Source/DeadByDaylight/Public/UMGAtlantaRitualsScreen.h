#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaRitualsScreen.generated.h"

class UUMGAtlantaRitualTab;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaRitualsScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGAtlantaRitualTab* DailyTab;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGAtlantaRitualTab* WeeklyTab;

	UPROPERTY(BlueprintReadOnly)
	FText _atlantaRitualTitle;

	UPROPERTY(BlueprintReadOnly)
	FText _endInLabel;

	UPROPERTY(BlueprintReadOnly)
	FText _dailyButtonLabel;

	UPROPERTY(BlueprintReadOnly)
	FText _weeklyButtonLabel;

	UPROPERTY(BlueprintReadOnly)
	FText _dailyRemainingTime;

	UPROPERTY(BlueprintReadOnly)
	FText _weeklyRemainingTime;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetNewRitualNumbers(int32 newDailyRitualNumber, int32 newWeeklyRitualNumber);

private:
	UFUNCTION()
	void BroadcastOnClaimRewardButtonPressed(const int32 ritualId);

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastOnBackButtonPressed();

public:
	UUMGAtlantaRitualsScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaRitualsScreen) { return 0; }
