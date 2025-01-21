#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESharedAuthenticationProvider.h"
#include "UMGAuthenticationProviderSelection.generated.h"

UCLASS(Abstract, EditInlineNew)
class SHAREDAUTHENTICATIONUTILITIES_API UUMGAuthenticationProviderSelection : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isAsia;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateWidgetsVisibility();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void ShowMigrationFailedPopup();

	UFUNCTION(BlueprintCallable)
	void SetSelectedAuthenticationProvider(ESharedAuthenticationProvider provider);

	UFUNCTION(BlueprintImplementableEvent)
	void SetMigrateWarningMessageAndShowPopup(const FString& playerName);

public:
	UUMGAuthenticationProviderSelection();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAuthenticationProviderSelection) { return 0; }
