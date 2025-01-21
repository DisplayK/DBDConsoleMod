#pragma once

#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "DBDAggregateParticleSystemComponent.generated.h"

class USceneComponent;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDAggregateParticleSystemComponent : public UParticleSystemComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float CullAngle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float EndFadeDistance;

	UPROPERTY(Transient, Export)
	TSet<USceneComponent*> LocatorComponentCache;

	UPROPERTY(Transient)
	bool PendingReset;

public:
	UDBDAggregateParticleSystemComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAggregateParticleSystemComponent) { return 0; }
