#pragma once

#include "CoreMinimal.h"
#include "BasePopupScreen.h"
#include "GenericPopupScreen.generated.h"

class UUMGGenericPopup;

UCLASS()
class UGenericPopupScreen : public UBasePopupScreen
{
	GENERATED_BODY()

protected:
	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UUMGGenericPopup* _popup;

private:
	UFUNCTION()
	void OnChoiceSelected(int32 selectedButtonType);

public:
	UGenericPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UGenericPopupScreen) { return 0; }
