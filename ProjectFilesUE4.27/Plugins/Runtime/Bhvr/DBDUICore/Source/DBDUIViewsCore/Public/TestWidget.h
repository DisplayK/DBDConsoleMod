#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "TestWidget.generated.h"

class UPanelWidget;

UCLASS(EditInlineNew)
class UTestWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UPanelWidget* Workbench;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool ShowWorkbench;

public:
	UFUNCTION(BlueprintCallable)
	void SetShowWorkbench(bool showWorkbenchNew);

public:
	UTestWidget();
};

FORCEINLINE uint32 GetTypeHash(const UTestWidget) { return 0; }
