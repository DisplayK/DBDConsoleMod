#pragma once

#include "CoreMinimal.h"
#include "UIComponent.h"
#include "EPresenterPhase.h"
#include "PresenterGroup.generated.h"

class UPresenter;

UCLASS(BlueprintType, Abstract, EditInlineNew)
class DBDUIPRESENTERS_API UPresenterGroup : public UUIComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPresenterPhase WidgetInstantiationPhase;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<UUIComponent*> _components;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Export)
	TArray<UPresenter*> _presenters;

public:
	UPresenterGroup();
};

FORCEINLINE uint32 GetTypeHash(const UPresenterGroup) { return 0; }
