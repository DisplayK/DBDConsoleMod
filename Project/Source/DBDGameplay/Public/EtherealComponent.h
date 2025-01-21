#pragma once

#include "CoreMinimal.h"
#include "MovementSettings.h"
#include "Ethereal.h"
#include "Components/ActorComponent.h"
#include "EtherealComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UEtherealComponent : public UActorComponent, public IMovementSettings, public IEthereal
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_OnIsEtherealChanged)
	bool _isEthereal;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetIsEthereal(float timestamp, bool ethereal);

	UFUNCTION()
	void OnRep_OnIsEtherealChanged();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UEtherealComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEtherealComponent) { return 0; }
