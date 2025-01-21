#pragma once

#include "CoreMinimal.h"
#include "UMGTallyListElementWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGTallyEmblemsWidget.generated.h"

class UUMGTallyEmblemWidget;
class UHorizontalBox;

UCLASS(EditInlineNew)
class UUMGTallyEmblemsWidget : public UUMGTallyListElementWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, NoClear)
	TSoftClassPtr<UUMGTallyEmblemWidget> EmblemWidgetClass;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* EmblemsContainer;

private:
	UPROPERTY(Transient, Export)
	TArray<UUMGTallyEmblemWidget*> _emblems;

public:
	UFUNCTION(BlueprintPure)
	TArray<UUMGTallyEmblemWidget*> GetEmblems() const;

public:
	UUMGTallyEmblemsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyEmblemsWidget) { return 0; }
