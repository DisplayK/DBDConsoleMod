#pragma once

#include "CoreMinimal.h"
#include "EPopupButtonType.h"
#include "BasePopupPresenter.h"
#include "GenericPopupPresenter.generated.h"

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UGenericPopupPresenter : public UBasePopupPresenter
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnBack();

	UFUNCTION()
	void OnAppResumed(bool isAppResumed);

	UFUNCTION()
	void OnAction(EPopupButtonType popupAction);

public:
	UGenericPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UGenericPopupPresenter) { return 0; }
