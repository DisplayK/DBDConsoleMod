#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGTallyBonusVisualWidget.generated.h"

class UImage;
class UTexture2D;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UUMGTallyBonusVisualWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TMap<int32, TSoftObjectPtr<UTexture2D>> MultiplierTextureMap;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UImage* MultiplierImage;

public:
	UUMGTallyBonusVisualWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyBonusVisualWidget) { return 0; }
