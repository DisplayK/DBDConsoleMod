#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGTallyCharacterProgressionBar.generated.h"

class UProgressBar;

UCLASS(Abstract, EditInlineNew)
class UUMGTallyCharacterProgressionBar : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UProgressBar* ProgressBar;

public:
	UUMGTallyCharacterProgressionBar();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyCharacterProgressionBar) { return 0; }
