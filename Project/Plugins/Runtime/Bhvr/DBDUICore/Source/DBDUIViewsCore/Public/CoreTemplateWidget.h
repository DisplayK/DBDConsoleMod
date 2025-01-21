#pragma once

#include "CoreMinimal.h"
#include "TemplateViewInterface.h"
#include "Blueprint/UserWidget.h"
#include "CoreTemplateWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTemplateWidget : public UUserWidget, public ITemplateViewInterface
{
	GENERATED_BODY()

public:
	UCoreTemplateWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTemplateWidget) { return 0; }
