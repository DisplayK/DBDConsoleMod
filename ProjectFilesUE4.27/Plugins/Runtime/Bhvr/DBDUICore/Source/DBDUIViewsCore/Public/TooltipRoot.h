#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TooltipRoot.generated.h"

class UCanvasPanel;

UCLASS(EditInlineNew)
class UTooltipRoot : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UCanvasPanel* _canvasPanel;

public:
	UTooltipRoot();
};

FORCEINLINE uint32 GetTypeHash(const UTooltipRoot) { return 0; }
