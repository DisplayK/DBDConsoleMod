#pragma once

#include "CoreMinimal.h"
#include "ImposeStatusEffectOnEventAddon.h"
#include "Addon_Ghost_OlsensAddressBook.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_Ghost_OlsensAddressBook : public UImposeStatusEffectOnEventAddon
{
	GENERATED_BODY()

public:
	UAddon_Ghost_OlsensAddressBook();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Ghost_OlsensAddressBook) { return 0; }
