#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GeneratorBlastMinePlacerComponent.generated.h"

class ABlastMineFirecracker;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UGeneratorBlastMinePlacerComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _mineRelativeHeightFromGenerator;

private:
	UPROPERTY(ReplicatedUsing=OnRep_BlastMine, Transient)
	ABlastMineFirecracker* _blastMine;

private:
	UFUNCTION()
	void OnRep_BlastMine();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGeneratorBlastMinePlacerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorBlastMinePlacerComponent) { return 0; }
