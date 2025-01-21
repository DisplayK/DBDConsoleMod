#pragma once

#include "CoreMinimal.h"
#include "ArchivesVignetteViewData.h"
#include "CoreTabWidget.h"
#include "CoreArchiveVignetteButtonWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveVignetteButtonWidget : public UCoreTabWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _subtitleMaxLength;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetVisualData(const FText& vignetteTitle, const FText& vignetteSubtitle, const FText& vignetteProgressText, const bool displayProgress, const float vignetteProgress, const bool isUnread, const FText& unreadIndicatorText, const bool showCinematics, const bool lockCinematics);

	UFUNCTION(BlueprintImplementableEvent)
	void SetVignetteRead(const bool isRead);

public:
	UFUNCTION(BlueprintCallable)
	void SetData(const FArchivesVignetteViewData& vignetteDataList);

public:
	UCoreArchiveVignetteButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveVignetteButtonWidget) { return 0; }
