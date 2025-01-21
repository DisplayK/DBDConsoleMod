#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "TestPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UTestPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> TestWidgetClass;

public:
	UTestPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UTestPresenter) { return 0; }
