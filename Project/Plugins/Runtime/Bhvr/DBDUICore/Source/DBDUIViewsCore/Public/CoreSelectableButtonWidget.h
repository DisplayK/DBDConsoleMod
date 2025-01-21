#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CoreSelectableButtonWidget.generated.h"

class UMaterialInterface;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreSelectableButtonWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectedChangedDelegate, UCoreSelectableButtonWidget*, buttonTarget, bool, isSelected);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedAgainDelegate, UCoreSelectableButtonWidget*, buttonTarget);

public:
	UPROPERTY(BlueprintAssignable)
	FOnSelectedChangedDelegate OnSelectedChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnSelectedAgainDelegate OnSelectedAgainDelegate;

protected:
	UPROPERTY(EditDefaultsOnly)
	FString _analyticsName;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateBackgroundSkin(UMaterialInterface* skinMaterial);

	UFUNCTION(BlueprintCallable)
	void SetSelected(bool isSelected);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnSelectedChanged(bool isSelected);

public:
	UFUNCTION(BlueprintPure)
	bool IsSelected() const;

	UFUNCTION(BlueprintPure)
	bool IsSelectable() const;

public:
	UCoreSelectableButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreSelectableButtonWidget) { return 0; }
