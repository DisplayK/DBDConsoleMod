#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ParticleSystemDistanceFaderComponent.generated.h"

class UParticleSystemComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UParticleSystemDistanceFaderComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UParticleSystemComponent* ParticleSystemComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName OpacityParameterName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float StartFadeDistance;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float EndFadeDistance;

public:
	UParticleSystemDistanceFaderComponent();
};

FORCEINLINE uint32 GetTypeHash(const UParticleSystemDistanceFaderComponent) { return 0; }
