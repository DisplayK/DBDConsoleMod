#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "LethalPursuer.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class ULethalPursuer : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _survivorRevealDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedRevealEffect;

private:
	UFUNCTION(Server, Reliable)
	void Server_ActivatePerk();

	UFUNCTION()
	void Local_OnIntroCompleted();

public:
	ULethalPursuer();
};

FORCEINLINE uint32 GetTypeHash(const ULethalPursuer) { return 0; }
