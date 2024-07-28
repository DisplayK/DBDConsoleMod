#pragma once

#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "Types/SlateEnums.h"
#include "UObject/NoExportTypes.h"
#include "DBDWrapBox.generated.h"

class UDBDWrapBoxSlot;
class UWidget;

UCLASS()
class DBDUIVIEWSCORE_API UDBDWrapBox : public UPanelWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector2D InnerSlotPadding;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float WrapWidth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bExplicitWrapWidth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

public:
	UFUNCTION(BlueprintCallable)
	void SetInnerSlotPadding(FVector2D InPadding);

	UFUNCTION(BlueprintCallable)
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

	UFUNCTION(BlueprintCallable)
	UDBDWrapBoxSlot* AddChildToWrapBox(UWidget* Content);

public:
	UDBDWrapBox();
};

FORCEINLINE uint32 GetTypeHash(const UDBDWrapBox) { return 0; }
