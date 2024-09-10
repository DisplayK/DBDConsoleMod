#pragma once

#include "CoreMinimal.h"
#include "AkPropertyToControl.h"
#include "Types/SlateEnums.h"
#include "UObject/NoExportTypes.h"
#include "OnPropertyDropDetected.h"
#include "Components/Widget.h"
#include "Styling/SlateTypes.h"
#include "OnItemDropDetected.h"
#include "AkWwiseItemToControl.h"
#include "AkOnFloatValueChangedEvent.h"
#include "AkSlider.generated.h"

UCLASS()
class AKAUDIO_API UAkSlider : public UWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float Value;

	UPROPERTY()
	FGetFloat ValueDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSliderStyle WidgetStyle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TEnumAsByte<EOrientation> Orientation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FLinearColor SliderBarColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FLinearColor SliderHandleColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IndentHandle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool Locked;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float StepSize;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool IsFocusable;

	UPROPERTY(VisibleAnywhere)
	FAkPropertyToControl ThePropertyToControl;

	UPROPERTY(VisibleAnywhere)
	FAkWwiseItemToControl ItemToControl;

	UPROPERTY(BlueprintAssignable)
	FAkOnFloatValueChangedEvent OnValueChanged;

	UPROPERTY(BlueprintAssignable)
	FOnItemDropDetected OnItemDropped;

	UPROPERTY(BlueprintAssignable)
	FOnPropertyDropDetected OnPropertyDropped;

public:
	UFUNCTION(BlueprintCallable)
	void SetValue(float InValue);

	UFUNCTION(BlueprintCallable)
	void SetStepSize(float InValue);

	UFUNCTION(BlueprintCallable)
	void SetSliderHandleColor(FLinearColor InValue);

	UFUNCTION(BlueprintCallable)
	void SetSliderBarColor(FLinearColor InValue);

	UFUNCTION(BlueprintCallable)
	void SetLocked(bool InValue);

	UFUNCTION(BlueprintCallable)
	void SetIndentHandle(bool InValue);

	UFUNCTION(BlueprintCallable)
	void SetAkSliderItemProperty(const FString& ItemProperty);

	UFUNCTION(BlueprintCallable)
	void SetAkSliderItemId(const FGuid& ItemId);

	UFUNCTION(BlueprintPure)
	float GetValue() const;

	UFUNCTION(BlueprintPure)
	FString GetAkSliderItemProperty() const;

	UFUNCTION(BlueprintPure)
	FGuid GetAkSliderItemId() const;

public:
	UAkSlider();
};

FORCEINLINE uint32 GetTypeHash(const UAkSlider) { return 0; }
