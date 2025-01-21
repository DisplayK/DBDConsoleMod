#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGShadersPrecompilingProgressionWidget.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS(Abstract, EditInlineNew)
class UUMGShadersPrecompilingProgressionWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UProgressBar* _progressBar;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UTextBlock* _progressionText;

public:
	UUMGShadersPrecompilingProgressionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGShadersPrecompilingProgressionWidget) { return 0; }
