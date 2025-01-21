#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KillerSpecificSurvivorAnimationPicker.generated.h"

class UDataTable;

UCLASS(meta=(BlueprintSpawnableComponent))
class UKillerSpecificSurvivorAnimationPicker : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UDataTable* _killerSpecificSurvivorAnimationDB;

public:
	UKillerSpecificSurvivorAnimationPicker();
};

FORCEINLINE uint32 GetTypeHash(const UKillerSpecificSurvivorAnimationPicker) { return 0; }
