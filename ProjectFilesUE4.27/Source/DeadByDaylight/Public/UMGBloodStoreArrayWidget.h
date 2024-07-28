#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBloodStoreArrayWidget.generated.h"

class UUMGBloodStoreRowWidget;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBloodStoreArrayWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBloodStoreRowWidget* FirstBloodStoreRowWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBloodStoreRowWidget* SecondBloodStoreRowWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBloodStoreRowWidget* ThirdBloodStoreRowWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBloodStoreRowWidget* FourthBloodStoreRowWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGBloodStoreRowWidget* FifthBloodStoreRowWidget;

private:
	UPROPERTY(Transient, Export)
	TArray<UUMGBloodStoreRowWidget*> _bloodStoreRowArray;

private:
	UFUNCTION()
	void BroadcastBloodNodeSelected(const FString& id);

public:
	UUMGBloodStoreArrayWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBloodStoreArrayWidget) { return 0; }
