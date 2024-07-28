#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "ESharedAuthenticationProvider.h"
#include "UObject/SoftObjectPtr.h"
#include "SharedAuthenticationComponent.generated.h"

class UUserWidget;
class UUMGAutheticationProviderSelection;
class UUMGAuthenticationProviderSelection;
class USharedAuthenticationMigrateComponent;

UCLASS()
class SHAREDAUTHENTICATIONUTILITIES_API USharedAuthenticationComponent : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 PopupZOrder;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUMGAutheticationProviderSelection> AuthenticationProviderSelectionWidget;

	UPROPERTY(EditAnywhere)
	TSoftClassPtr<UUMGAuthenticationProviderSelection> AuthenticationProviderSelectionWidgetToLoad;

	UPROPERTY(EditAnywhere)
	TMap<ESharedAuthenticationProvider, TSoftClassPtr<UUserWidget>> LoginBackgroundToLoadWidgetToLoadMap;

private:
	UPROPERTY(Transient)
	UObject* _worldContextObject;

	UPROPERTY(Transient, Export)
	UUserWidget* _loginBackgroundWidget;

	UPROPERTY(Transient, Export)
	UUMGAuthenticationProviderSelection* _identityAuthenticationSelectionWidget;

	UPROPERTY(Transient)
	USharedAuthenticationMigrateComponent* _migrateComponent;

public:
	USharedAuthenticationComponent();
};

FORCEINLINE uint32 GetTypeHash(const USharedAuthenticationComponent) { return 0; }
