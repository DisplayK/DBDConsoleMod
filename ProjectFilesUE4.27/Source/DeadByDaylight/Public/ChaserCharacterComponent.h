#pragma once

#include "CoreMinimal.h"
#include "ChaseUpdateInfo.h"
#include "ChaseComponent.h"
#include "GameplayTagContainer.h"
#include "ChaserCharacterComponent.generated.h"

class APawn;
class UDBDPawnSensingComponent;
class ACamperPlayer;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChaserCharacterComponent : public UChaseComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UDBDPawnSensingComponent* _camperSensor;

	UPROPERTY(Transient)
	TMap<ADBDPlayer*, FChaseUpdateInfo> _chaseUpdateInfo;

	UPROPERTY(Replicated, Transient)
	TArray<ADBDPlayer*> _chasedPlayers;

	UPROPERTY(Transient)
	TArray<ADBDPlayer*> _authority_survivorsWhoStunnedKillerByPalletDuringChase;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _preventChaseTags;

private:
	UFUNCTION()
	void OnKillerLocallyObservedChanged(bool locallyObserved);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnChaseStart(ACamperPlayer* survivor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnChaseEnd(ACamperPlayer* survivor, const FChaseUpdateInfo chaseUpdateInfo);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnAllChaseEnd();

	UFUNCTION()
	void Authority_OnChaseTargetFound(APawn* pawn);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UChaserCharacterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UChaserCharacterComponent) { return 0; }
