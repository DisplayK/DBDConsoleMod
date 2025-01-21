#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGQueueStatusIconWidget.generated.h"

class UImage;

UCLASS(Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGQueueStatusIconWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UImage* StatusIndicator;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor AcceptableColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor ModerateColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor LongColor;

public:
	UUMGQueueStatusIconWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGQueueStatusIconWidget) { return 0; }
