#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RootWidget.generated.h"

class UCanvasPanel;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API URootWidget : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UCanvasPanel* _canvasPanel;

public:
	URootWidget();
};

FORCEINLINE uint32 GetTypeHash(const URootWidget) { return 0; }
