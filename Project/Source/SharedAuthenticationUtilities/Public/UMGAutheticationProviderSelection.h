#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESharedAuthenticationProvider.h"
#include "UMGAutheticationProviderSelection.generated.h"

UCLASS(Abstract, EditInlineNew)
class SHAREDAUTHENTICATIONUTILITIES_API UUMGAutheticationProviderSelection : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetSelectedAuthenticationProvider(ESharedAuthenticationProvider provider);

public:
	UUMGAutheticationProviderSelection();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAutheticationProviderSelection) { return 0; }
