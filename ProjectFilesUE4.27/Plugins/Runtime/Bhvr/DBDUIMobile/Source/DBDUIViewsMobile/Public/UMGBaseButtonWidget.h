#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "MobileBaseUserWidget.h"
#include "UMGBaseButtonWidget.generated.h"

class UButton;
class UImage;
class UTextBlock;
class UAkAudioEvent;

UCLASS(Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGBaseButtonWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBaseButtonReleased);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBaseButtonPressed);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBaseButtonLongPress);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBaseButtonClicked);

public:
	UPROPERTY(BlueprintAssignable)
	FOnBaseButtonClicked OnBaseButtonClickedEvent;

	UPROPERTY(BlueprintAssignable)
	FOnBaseButtonPressed OnBaseButtonPressedEvent;

	UPROPERTY(BlueprintAssignable)
	FOnBaseButtonReleased OnBaseButtonReleasedEvent;

	UPROPERTY(BlueprintAssignable)
	FOnBaseButtonLongPress OnBaseButtonLongPressEvent;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UButton* Button;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* IconPicture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* ButtonLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush ButtonPictureBrush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ButtonText;

	UPROPERTY(EditAnywhere)
	UAkAudioEvent* OnPressSound;

	UPROPERTY(EditAnywhere)
	UAkAudioEvent* OnClickSound;

	UPROPERTY(EditAnywhere)
	UAkAudioEvent* OnLongPressSound;

	UPROPERTY(EditAnywhere)
	UAkAudioEvent* OnReleaseSound;

	UPROPERTY(EditAnywhere)
	UAkAudioEvent* OnHoveredSound;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleButtonReleasedEvent();

	UFUNCTION(BlueprintCallable)
	void HandleButtonPressedEvent();

	UFUNCTION(BlueprintCallable)
	void HandleButtonLongPressEvent();

	UFUNCTION(BlueprintCallable)
	void HandleButtonHoveredEvent();

	UFUNCTION(BlueprintCallable)
	void HandleButtonClickedEvent();

public:
	UUMGBaseButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseButtonWidget) { return 0; }
