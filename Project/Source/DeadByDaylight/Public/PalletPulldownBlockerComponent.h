#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PalletPulldownBlockerComponent.generated.h"

class UObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPalletPulldownBlockerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated, Transient)
	bool _isPalletPulldownBlockedByEntity;

	UPROPERTY(ReplicatedUsing=OnRep_PalletToBlock, Transient)
	UObject* _palletToBlock;

	UPROPERTY(EditDefaultsOnly)
	float _blockedDisappearFxTime;

private:
	UFUNCTION()
	void OnRep_PalletToBlock(UObject* oldPalletToBlock);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PalletPulldownBlockedShowCosmetic(UObject* palletToBlock);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PalletPulldownBlockedHideCosmetic(UObject* palletToUnblock);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UPalletPulldownBlockerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPalletPulldownBlockerComponent) { return 0; }
