#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DisplayStandCurrencyRequesterComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDisplayStandCurrencyRequesterComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditInstanceOnly)
	UClass* _menuCurrencyDisplayableClass;

public:
	UDisplayStandCurrencyRequesterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDisplayStandCurrencyRequesterComponent) { return 0; }
