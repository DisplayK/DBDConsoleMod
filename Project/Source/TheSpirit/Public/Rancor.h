#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Rancor.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class URancor : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _survivorRevealDuration;

	UPROPERTY(EditDefaultsOnly)
	float _killerRevealToObsessionDuration;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SpawnBubbleAtSurvivorsLocation();

public:
	UFUNCTION(BlueprintPure)
	float GetSurvivorRevealDuration() const;

public:
	URancor();
};

FORCEINLINE uint32 GetTypeHash(const URancor) { return 0; }
