#pragma once

#include "CoreMinimal.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingAboutContextWidget.generated.h"

class UUMGSettingContextButton;

UCLASS(Abstract, EditInlineNew)
class UUMGSettingAboutContextWidget : public UUMGSettingContextWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGSettingContextButton* EULAButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UUMGSettingContextButton* CreditsButton;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetVersionNumber(const FString& versionNumber);

public:
	UUMGSettingAboutContextWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingAboutContextWidget) { return 0; }
