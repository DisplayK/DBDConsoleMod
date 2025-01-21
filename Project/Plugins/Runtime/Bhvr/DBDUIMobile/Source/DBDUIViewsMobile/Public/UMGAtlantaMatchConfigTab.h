#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGAtlantaMatchConfigTab.generated.h"

class USizeBox;
class UTextBlock;
class UCanvasPanel;

UCLASS(Abstract, EditInlineNew)
class UUMGAtlantaMatchConfigTab : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USizeBox* IconSizeBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* TabName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* RandomPanel;

public:
	UUMGAtlantaMatchConfigTab();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaMatchConfigTab) { return 0; }
