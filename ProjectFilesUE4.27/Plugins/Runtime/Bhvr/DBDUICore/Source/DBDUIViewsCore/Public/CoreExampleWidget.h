#pragma once

#include "CoreMinimal.h"
#include "ExampleViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "ExampleButtonClickDelegate.h"
#include "CoreExampleWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreExampleWidget : public UCoreBaseHudWidget, public IExampleViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EditAnywhere;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FString EditDefaultsOnly;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	FString EditInstanceOnly;

	UPROPERTY(EditAnywhere)
	FString EditNoBlueprint;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString EditDefaultsOnlyBlueprintReadOnly;

	UPROPERTY(VisibleAnywhere)
	FString VisibleAnywhere;

	UPROPERTY(VisibleDefaultsOnly)
	FString VisibleDefaultsOnly;

	UPROPERTY(VisibleInstanceOnly)
	FString VisibleInstanceOnly;

private:
	UPROPERTY()
	FExampleButtonClickDelegate ExampleButtonClickDelegate;

public:
	UCoreExampleWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreExampleWidget) { return 0; }
