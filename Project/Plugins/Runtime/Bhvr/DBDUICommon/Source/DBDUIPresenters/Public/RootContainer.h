#pragma once

#include "CoreMinimal.h"
#include "UIComponent.h"
#include "EGameLayer.h"
#include "RootContainer.generated.h"

class UUserWidget;

UCLASS(BlueprintType, EditInlineNew)
class DBDUIPRESENTERS_API URootContainer : public UUIComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EGameLayer GameLayer;

	UPROPERTY(EditAnywhere)
	float UnfocusedOpacity;

private:
	UPROPERTY(Transient, Export)
	UUserWidget* _rootWidget;

public:
	URootContainer();
};

FORCEINLINE uint32 GetTypeHash(const URootContainer) { return 0; }
