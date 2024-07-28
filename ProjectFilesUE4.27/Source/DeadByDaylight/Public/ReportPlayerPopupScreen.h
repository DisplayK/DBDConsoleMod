#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "ReportPlayerPopupScreen.generated.h"

UCLASS()
class UReportPlayerPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnTextInputMouseOver(bool isMouseOver);

	UFUNCTION()
	void OnConfirmReportPlayer(const FString& category, const FString& comment);

public:
	UReportPlayerPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UReportPlayerPopupScreen) { return 0; }
