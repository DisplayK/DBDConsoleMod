#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterOptimizer.generated.h"

class AActor;
class USignificanceStrategy;

UCLASS(meta=(BlueprintSpawnableComponent))
class SIGNIFICANCEUTILITIES_API UCharacterOptimizer : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _characterMovementTickRateWhenInsignificant;

	UPROPERTY(Replicated, Transient)
	TArray<AActor*> _dependentActorsToCheckSignficance;

	UPROPERTY(EditAnywhere, Export)
	USignificanceStrategy* _significanceStrategy;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCharacterOptimizer();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterOptimizer) { return 0; }
