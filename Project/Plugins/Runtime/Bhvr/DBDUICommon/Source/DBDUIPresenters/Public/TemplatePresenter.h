#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "TemplatePresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UTemplatePresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> TemplateWidgetClass;

public:
	UTemplatePresenter();
};

FORCEINLINE uint32 GetTypeHash(const UTemplatePresenter) { return 0; }
