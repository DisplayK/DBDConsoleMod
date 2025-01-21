#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "CoreButtonWidget.h"
#include "EUIActionType.h"
#include "CoreKeyListenerButtontWidget.generated.h"

class UDBDTextBlock;

UCLASS(EditInlineNew)
class UCoreKeyListenerButtontWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsKeyboardLabelVisible;

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDTextBlock* InputNameTB;

public:
	UFUNCTION(BlueprintCallable)
	void SetUIAction(const EUIActionType actionType);

	UFUNCTION(BlueprintCallable)
	void SetKeyOverride(const FKey keyOverride);

public:
	UCoreKeyListenerButtontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreKeyListenerButtontWidget) { return 0; }
