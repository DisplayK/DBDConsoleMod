#pragma once

#include "CoreMinimal.h"
#include "TallyPlayerResultData.h"
#include "OnTallyScoreboardAddFriendEvent.h"
#include "UMGLoadoutBaseWidget.h"
#include "OnTallyScoreboardReportEvent.h"
#include "UMGTallyScoreboardPlayerInfoWidget.generated.h"

class UImage;

UCLASS(EditInlineNew)
class UUMGTallyScoreboardPlayerInfoWidget : public UUMGLoadoutBaseWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnTallyScoreboardAddFriendEvent OnTallyScoreboardAddFriendEvent;

	UPROPERTY(BlueprintAssignable)
	FOnTallyScoreboardReportEvent OnTallyScoreboardReportEvent;

	UPROPERTY(BlueprintReadOnly, Export)
	UImage* ImageHorizontalSeparation;

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	FTallyPlayerResultData PlayerResultData;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool LoadoutIsBlocked;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateWidget();

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateReported();

	UFUNCTION(BlueprintCallable)
	void UpdateLoadout();

public:
	UFUNCTION(BlueprintCallable)
	void SetPlayerScoreData(const FTallyPlayerResultData& resultData);

	UFUNCTION(BlueprintCallable)
	void SetPlayerReported(bool isReport);

	UFUNCTION(BlueprintCallable)
	void SetPlayerLoadoutBlocked(bool isBlock);

	UFUNCTION(BlueprintCallable)
	void HandleReportEvent(FName buttonID);

	UFUNCTION(BlueprintCallable)
	void HandleAddFriendEvent(FName buttonID);

public:
	UUMGTallyScoreboardPlayerInfoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyScoreboardPlayerInfoWidget) { return 0; }
