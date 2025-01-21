#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlockableReplicatedDatum.h"
#include "BlockableComponent.generated.h"

class UBlockElement;
class ADBDPlayer;
class UObject;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UBlockableComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_ReplicatedDatum, Transient)
	FBlockableReplicatedDatum _replicatedDatum;

	UPROPERTY(Transient)
	TSet<UBlockElement*> _blockElements;

private:
	UFUNCTION()
	void OnRep_ReplicatedDatum();

public:
	UFUNCTION(BlueprintCallable)
	void Authority_RemoveBlock(const UObject* source);

	UFUNCTION(BlueprintCallable)
	void Authority_AddTimedBlock(const UObject* source, const float duration, const TSet<ADBDPlayer*>& affectedPlayers);

	UFUNCTION(BlueprintCallable)
	void Authority_AddBlock(const UObject* source, const TSet<ADBDPlayer*>& affectedPlayers);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBlockableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlockableComponent) { return 0; }
