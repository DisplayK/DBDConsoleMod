#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DisplayStandItemRequesterComponent.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDisplayStandItemRequesterComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void LoadItemsOnCharacter(AActor* actor);

public:
	UDisplayStandItemRequesterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDisplayStandItemRequesterComponent) { return 0; }
