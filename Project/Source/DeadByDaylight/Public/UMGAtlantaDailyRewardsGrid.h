#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGAtlantaDailyRewardsGrid.generated.h"

class UUMGDailyRewardWidget;
class UUniformGridPanel;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaDailyRewardsGrid : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGDailyRewardWidget> BigDailyRewardWidgetTemplate_type_7;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGDailyRewardWidget> BigDailyRewardWidgetTemplate_type_9;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGDailyRewardWidget> BigDailyRewardWidgetTemplate_type_13;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGDailyRewardWidget> SmallDailyRewardWidgetTemplate_type_7;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGDailyRewardWidget> SmallDailyRewardWidgetTemplate_type_9;

	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGDailyRewardWidget> SmallDailyRewardWidgetTemplate_type_13;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUniformGridPanel* DailyRewardWidgetsGridPanel;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* LastDailyRewardWidgetPanel;

	UPROPERTY(BlueprintReadOnly)
	int32 NumberOfItems;

private:
	UPROPERTY(Transient)
	UClass* _bigWidgetTemplate;

	UPROPERTY(Transient)
	UClass* _smallWidgetTemplate;

	UPROPERTY(Transient, Export)
	TArray<UUMGDailyRewardWidget*> _rewardWidgets;

	UPROPERTY(Transient, Export)
	UUMGDailyRewardWidget* _widgetToAttach;

protected:
	UFUNCTION()
	void StartRewardsIntroRewardSequence();

public:
	UFUNCTION()
	void StartIntroSequence();

protected:
	UFUNCTION()
	void PlayNextRewardIntroAnimation();

	UFUNCTION(BlueprintImplementableEvent)
	void InitializeLayouts_BP();

public:
	UUMGAtlantaDailyRewardsGrid();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaDailyRewardsGrid) { return 0; }
