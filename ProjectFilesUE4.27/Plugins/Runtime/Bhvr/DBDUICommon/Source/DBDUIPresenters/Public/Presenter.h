#pragma once

#include "CoreMinimal.h"
#include "UIComponent.h"
#include "EContext.h"
#include "Components/SlateWrapperTypes.h"
#include "EPresenterPhase.h"
#include "Presenter.generated.h"

class UPresenterRequirementFunction;
class UUserWidget;

UCLASS(BlueprintType, Abstract, EditInlineNew)
class DBDUIPRESENTERS_API UPresenter : public UUIComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _overrideWidgetInstanciationPhase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPresenterPhase _widgetInstantiationPhase;

	UPROPERTY(EditAnywhere)
	bool RequestPresentationAtBeginPlay;

	UPROPERTY(EditAnywhere)
	ESlateVisibility InitialVisibility;

	UPROPERTY(EditAnywhere)
	int32 _widgetZOrder;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UUserWidget* _widget;

	UPROPERTY(EditAnywhere)
	TSet<FString> _ignoredPresentationRequirementFunctions;

	UPROPERTY(Transient)
	TArray<UPresenterRequirementFunction*> _presentationRequirementFunctions;

private:
	UFUNCTION()
	bool ShouldPresent() const;

protected:
	UFUNCTION()
	void OnContextSectionChanged(EContext context);

	UFUNCTION()
	bool IsPlayerStateReady() const;

	UFUNCTION()
	bool IsGameStateReady() const;

private:
	UFUNCTION()
	bool IsContextReady() const;

public:
	UPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UPresenter) { return 0; }
