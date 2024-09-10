#pragma once

#include "CoreMinimal.h"
#include "EArchivePathStatus.h"
#include "CoreButtonWidget.h"
#include "ArchiveMapPathViewData.h"
#include "CoreArchiveQuestPathWidget.generated.h"

class UOverlay;
class UDBDImage;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveQuestPathWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UOverlay* PathOverlay;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* PathImage;

	UPROPERTY(BlueprintReadOnly)
	EArchivePathStatus _status;

	UPROPERTY()
	FArchiveMapPathViewData _data;

public:
	UFUNCTION(BlueprintCallable)
	void UpdatePath(const FArchiveMapPathViewData& data);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetVisualState(const EArchivePathStatus& pathStatus);

public:
	UFUNCTION()
	void Reset();

	UFUNCTION(BlueprintCallable)
	void InitPath(const FArchiveMapPathViewData& data);

public:
	UCoreArchiveQuestPathWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveQuestPathWidget) { return 0; }
