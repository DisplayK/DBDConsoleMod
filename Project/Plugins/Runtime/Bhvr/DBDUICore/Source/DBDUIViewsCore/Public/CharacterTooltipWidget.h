#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CharacterTooltipViewData.h"
#include "ECharacterDifficulty.h"
#include "CharacterTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCharacterTooltipWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* InstructionTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* LevelTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* MarketTB;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDRichTextBlock* DifficultyRTB;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetTooltipData(const FCharacterTooltipViewData& characterViewData);

protected:
	UFUNCTION(BlueprintCallable)
	void SetLevel(int32 level);

	UFUNCTION(BlueprintCallable)
	void SetDifficulty(ECharacterDifficulty difficulty);

public:
	UCharacterTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterTooltipWidget) { return 0; }
