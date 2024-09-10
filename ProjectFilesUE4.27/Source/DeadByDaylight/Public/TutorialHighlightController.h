#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHudComponent.h"
#include "TutorialHighlightController.generated.h"

UCLASS(BlueprintType)
class UTutorialHighlightController : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetHudComponentHighlight(EHudComponent hudComponent, bool show);

public:
	UTutorialHighlightController();
};

FORCEINLINE uint32 GetTypeHash(const UTutorialHighlightController) { return 0; }
