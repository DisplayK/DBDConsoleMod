#pragma once

#include "CoreMinimal.h"
#include "Components/PanelSlot.h"
#include "Layout/Margin.h"
#include "Types/SlateEnums.h"
#include "DBDWrapBoxSlot.generated.h"

UCLASS(BlueprintType)
class DBDUIVIEWSCORE_API UDBDWrapBoxSlot : public UPanelSlot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FMargin Padding;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bFillEmptySpace;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float FillSpanWhenLessThan;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;

public:
	UFUNCTION(BlueprintCallable)
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);

	UFUNCTION(BlueprintCallable)
	void SetPadding(FMargin InPadding);

	UFUNCTION(BlueprintCallable)
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

	UFUNCTION(BlueprintCallable)
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);

	UFUNCTION(BlueprintCallable)
	void SetFillEmptySpace(bool InbFillEmptySpace);

public:
	UDBDWrapBoxSlot();
};

FORCEINLINE uint32 GetTypeHash(const UDBDWrapBoxSlot) { return 0; }
