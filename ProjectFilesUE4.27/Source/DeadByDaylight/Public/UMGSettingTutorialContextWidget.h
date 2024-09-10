#pragma once

#include "CoreMinimal.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingTutorialContextWidget.generated.h"

class UUMGSettingContextButton;

UCLASS(Abstract, EditInlineNew)
class UUMGSettingTutorialContextWidget : public UUMGSettingContextWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGSettingContextButton* SurvivorTutorialButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGSettingContextButton* KillerTutorialButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGSettingContextButton* SurvivorCinematicButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGSettingContextButton* KillerCinematicButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGSettingContextButton* LoreCinematicButton;

public:
	UUMGSettingTutorialContextWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingTutorialContextWidget) { return 0; }
