#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MoriableComponent.generated.h"

class UInteractionDefinition;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMoriableComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(ReplicatedUsing=OnRep_MoriInteractions, Transient, Export)
	TArray<UInteractionDefinition*> _moriInteractions;

protected:
	UFUNCTION()
	void OnRep_MoriInteractions();

public:
	UFUNCTION(BlueprintCallable)
	void OnMoriUpdateStart();

	UFUNCTION(BlueprintCallable)
	void OnMoriFinished(bool hasBeenKilledByMori);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UMoriableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMoriableComponent) { return 0; }
