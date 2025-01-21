#pragma once

#include "CoreMinimal.h"
#include "DBDLocatorComponent.h"
#include "DBDAggregateParticleLocatorComponent.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDAggregateParticleLocatorComponent : public UDBDLocatorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UParticleSystem* Template;

private:
	UPROPERTY(Transient, Export)
	UParticleSystemComponent* _particleComponent;

public:
	UDBDAggregateParticleLocatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAggregateParticleLocatorComponent) { return 0; }
