#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "LightSensitivityPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API ULightSensitivityPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> LightSensitivityScreenWidgetClass;

protected:
	UPROPERTY(EditDefaultsOnly)
	float AutoCompleteTime;

private:
	UFUNCTION()
	void OnContinue();

	UFUNCTION()
	void OnCompletedFadeOut();

public:
	ULightSensitivityPresenter();
};

FORCEINLINE uint32 GetTypeHash(const ULightSensitivityPresenter) { return 0; }
