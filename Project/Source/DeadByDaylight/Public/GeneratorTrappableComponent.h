#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EGeneratorTrapType.h"
#include "GeneratorTrappableComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGeneratorTrappableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrapAddedOrRemoved, const EGeneratorTrapType, trapType);

public:
	UPROPERTY(BlueprintAssignable)
	FOnTrapAddedOrRemoved OnTrapGenerator;

	UPROPERTY(BlueprintAssignable)
	FOnTrapAddedOrRemoved OnRemoveTrap;

protected:
	UPROPERTY(ReplicatedUsing=OnRep_TrapsOnGenerator)
	TArray<EGeneratorTrapType> _trapsOnGenerator;

private:
	UFUNCTION()
	void OnRep_TrapsOnGenerator();

public:
	UFUNCTION(BlueprintCallable)
	bool GetHasTrap(const EGeneratorTrapType trapType);

	UFUNCTION(BlueprintCallable)
	bool GetHasAnyTrap();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGeneratorTrappableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorTrappableComponent) { return 0; }
