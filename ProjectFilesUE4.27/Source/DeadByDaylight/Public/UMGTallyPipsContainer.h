#pragma once

#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGTallyPipsContainer.generated.h"

class UHorizontalBox;
class UUMGTallyPip;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyPipsContainer : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UHorizontalBox* PipsContainer;

	UPROPERTY(EditAnywhere)
	TArray<TSoftClassPtr<UUMGTallyPip>> _pipsClasses;

	UPROPERTY(EditAnywhere)
	FMargin _pipsPadding;

	UPROPERTY(Transient, Export)
	TArray<UUMGTallyPip*> Pips;

public:
	UFUNCTION(BlueprintCallable)
	void SetData(int32 rank, int32 pipsRequiredForNextRank, int32 filledPips);

public:
	UUMGTallyPipsContainer();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyPipsContainer) { return 0; }
