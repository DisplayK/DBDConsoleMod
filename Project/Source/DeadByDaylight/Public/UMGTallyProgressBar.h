#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/NoExportTypes.h"
#include "UMGTallyProgressBar.generated.h"

class UUMGTallyPip;
class UProgressBar;
class UCanvasPanel;

UCLASS(EditInlineNew)
class UUMGTallyProgressBar : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UProgressBar* ProgressBar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCanvasPanel* PipsContainer;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSoftClassPtr<UUMGTallyPip>> _pipsClasses;

	UPROPERTY(EditDefaultsOnly)
	FVector2D _pipsAlignment;

public:
	UFUNCTION(BlueprintCallable)
	void SetPercent(float value);

	UFUNCTION(BlueprintPure)
	int32 GetPipsCount() const;

public:
	UUMGTallyProgressBar();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyProgressBar) { return 0; }
