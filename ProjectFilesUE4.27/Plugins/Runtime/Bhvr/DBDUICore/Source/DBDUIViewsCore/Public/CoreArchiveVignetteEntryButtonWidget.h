#pragma once

#include "CoreMinimal.h"
#include "CoreTabWidget.h"
#include "CoreArchiveVignetteEntryButtonWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveVignetteEntryButtonWidget : public UCoreTabWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UnlockEntry();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualData(const int32 entryNumber, const bool isRead, const FText& unreadIndicatorText);

	UFUNCTION(BlueprintCallable)
	void SetData(const int32 entryNumber, const bool isRead);

	UFUNCTION(BlueprintCallable)
	int32 GetEntryNumber();

public:
	UCoreArchiveVignetteEntryButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveVignetteEntryButtonWidget) { return 0; }
