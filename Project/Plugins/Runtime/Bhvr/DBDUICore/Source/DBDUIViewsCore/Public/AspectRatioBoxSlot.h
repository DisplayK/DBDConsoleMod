#pragma once

#include "CoreMinimal.h"
#include "Components/PanelSlot.h"
#include "Layout/Margin.h"
#include "Types/SlateEnums.h"
#include "AspectRatioBoxSlot.generated.h"

UCLASS(BlueprintType)
class DBDUIVIEWSCORE_API UAspectRatioBoxSlot : public UPanelSlot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FMargin Padding;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;

public:
	UFUNCTION(BlueprintCallable)
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);

	UFUNCTION(BlueprintCallable)
	void SetPadding(FMargin inPadding);

	UFUNCTION(BlueprintCallable)
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);

public:
	UAspectRatioBoxSlot();
};

FORCEINLINE uint32 GetTypeHash(const UAspectRatioBoxSlot) { return 0; }
