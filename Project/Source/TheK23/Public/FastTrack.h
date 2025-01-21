#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "FastTrack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UFastTrack : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _tokensToAdd;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTokenCountDecreased();

public:
	UFastTrack();
};

FORCEINLINE uint32 GetTypeHash(const UFastTrack) { return 0; }
