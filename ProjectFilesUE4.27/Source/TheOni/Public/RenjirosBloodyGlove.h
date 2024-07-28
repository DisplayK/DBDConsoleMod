#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "RenjirosBloodyGlove.generated.h"

class ACamperPlayer;
class UBloodOrbOverlapRevealToKiller;
class AActor;
class ABloodOrb;

UCLASS(meta=(BlueprintSpawnableComponent))
class URenjirosBloodyGlove : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _revealTime;

	UPROPERTY(Transient, Export)
	TMap<ACamperPlayer*, UBloodOrbOverlapRevealToKiller*> _revealEffectPerCamper;

private:
	UFUNCTION()
	void Authority_OnBloodOrbOverlapBegin(const AActor* overlappingActor, const ABloodOrb* bloodOrb);

public:
	URenjirosBloodyGlove();
};

FORCEINLINE uint32 GetTypeHash(const URenjirosBloodyGlove) { return 0; }
