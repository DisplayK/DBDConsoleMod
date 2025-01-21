#pragma once

#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "Styling/SlateTypes.h"
#include "OnBoolPropertyDropDetected.h"
#include "Components/Widget.h"
#include "Types/SlateEnums.h"
#include "AkBoolPropertyToControl.h"
#include "AkWwiseItemToControl.h"
#include "AkOnCheckBoxComponentStateChanged.h"
#include "OnWwiseItemDropDetected.h"
#include "UObject/NoExportTypes.h"
#include "AkCheckBox.generated.h"

UCLASS()
class AKAUDIO_API UAkCheckBox : public UContentWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	ECheckBoxState CheckedState;

	UPROPERTY()
	FGetCheckBoxState CheckedStateDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCheckBoxStyle WidgetStyle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsFocusable;

	UPROPERTY(EditAnywhere)
	FAkBoolPropertyToControl ThePropertyToControl;

	UPROPERTY(VisibleAnywhere)
	FAkWwiseItemToControl ItemToControl;

	UPROPERTY(BlueprintAssignable)
	FAkOnCheckBoxComponentStateChanged AkOnCheckStateChanged;

	UPROPERTY(BlueprintAssignable)
	FOnWwiseItemDropDetected OnItemDropped;

	UPROPERTY(BlueprintAssignable)
	FOnBoolPropertyDropDetected OnPropertyDropped;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsChecked(bool InIsChecked);

	UFUNCTION(BlueprintCallable)
	void SetCheckedState(ECheckBoxState InCheckedState);

	UFUNCTION(BlueprintCallable)
	void SetAkItemId(const FGuid& ItemId);

	UFUNCTION(BlueprintCallable)
	void SetAkBoolProperty(const FString& ItemProperty);

	UFUNCTION(BlueprintPure)
	bool IsPressed() const;

	UFUNCTION(BlueprintPure)
	bool IsChecked() const;

	UFUNCTION(BlueprintPure)
	ECheckBoxState GetCheckedState() const;

	UFUNCTION(BlueprintPure)
	FString GetAkProperty() const;

	UFUNCTION(BlueprintPure)
	FGuid GetAkItemId() const;

public:
	UAkCheckBox();
};

FORCEINLINE uint32 GetTypeHash(const UAkCheckBox) { return 0; }
