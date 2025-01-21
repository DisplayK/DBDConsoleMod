#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "DisplayStandCharmRequesterComponent.generated.h"

class ACharm;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDisplayStandCharmRequesterComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditInstanceOnly)
	TSubclassOf<ACharm> _menuCharmClass;

private:
	UFUNCTION()
	void OnCharmDisplayed(AActor* actor);

public:
	UDisplayStandCharmRequesterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDisplayStandCharmRequesterComponent) { return 0; }
