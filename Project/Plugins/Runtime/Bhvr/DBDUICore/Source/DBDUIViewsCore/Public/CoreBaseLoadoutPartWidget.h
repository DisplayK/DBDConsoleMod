#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "Blueprint/UserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "CoreBaseLoadoutPartWidget.generated.h"

class UDBDImage;
class UTextBlock;
class UTexture2D;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreBaseLoadoutPartWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* ImageRarity;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDImage* ImageIcon;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* TextStackCount;

protected:
	UFUNCTION(BlueprintCallable)
	void SetLoadoutStackCount(int32 stackCount);

	UFUNCTION(BlueprintCallable)
	void SetLoadoutPartRarity(EItemRarity rarity);

	UFUNCTION(BlueprintCallable)
	void SetLoadoutPartIcon(TSoftObjectPtr<UTexture2D> icon);

public:
	UCoreBaseLoadoutPartWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreBaseLoadoutPartWidget) { return 0; }
