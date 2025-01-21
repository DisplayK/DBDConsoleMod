#pragma once

#include "CoreMinimal.h"
#include "OnLoadoutFilterClickedEvent.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGLoadoutFilterWidget.generated.h"

class UHorizontalBox;
class UUMGLoadoutFilterButton;
class UTexture2D;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLoadoutFilterWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnLoadoutFilterClickedEvent OnLoadoutFilterClicked;

protected:
	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGLoadoutFilterButton> AtlantaLoadoutFilterButtonClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* FilterContainerBox;

	UPROPERTY(BlueprintReadOnly, Transient)
	TArray<FName> Filters;

	UPROPERTY(BlueprintReadOnly, Transient, Export)
	TArray<UUMGLoadoutFilterButton*> FilterButtons;

	UPROPERTY(BlueprintReadOnly, Transient, meta=(BindWidgetOptional))
	UUMGLoadoutFilterButton* SelectedFilterButton;

public:
	UFUNCTION()
	void OnFilterButtonClicked(FName filterName);

	UFUNCTION(BlueprintCallable)
	void InitFilterWidget(const TMap<FName, TSoftObjectPtr<UTexture2D>>& filtersInfo);

	UFUNCTION(BlueprintCallable)
	void ClearSelectedFilter();

public:
	UUMGLoadoutFilterWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLoadoutFilterWidget) { return 0; }
