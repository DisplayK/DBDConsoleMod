#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractionStarterComponent.generated.h"

class UInteractionDefinition;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UInteractionStarterComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated, Transient, Export)
	UInteractionDefinition* _interaction;

	UPROPERTY(ReplicatedUsing=OnRep_ShouldStartInteraction)
	bool _shouldStartInteraction;

private:
	UFUNCTION()
	void OnRep_ShouldStartInteraction();

	UFUNCTION()
	void OnInteractionStarted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInteractionStarterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionStarterComponent) { return 0; }
