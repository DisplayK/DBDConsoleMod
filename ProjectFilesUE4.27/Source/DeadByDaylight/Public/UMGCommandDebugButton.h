#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCommandDebugButton.generated.h"

class UTextBlock;
class UButton;

UCLASS(EditInlineNew)
class UUMGCommandDebugButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UTextBlock* CommandLabel;

	UPROPERTY(Export)
	UButton* CommandButton;

	UPROPERTY(EditAnywhere)
	FString CommandName;

private:
	UFUNCTION()
	void TriggerCommand();

public:
	UUMGCommandDebugButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCommandDebugButton) { return 0; }
