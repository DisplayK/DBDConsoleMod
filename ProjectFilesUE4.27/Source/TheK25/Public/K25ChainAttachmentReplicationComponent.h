#pragma once

#include "CoreMinimal.h"
#include "EK25ChainDetachmentReason.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "K25ChainAttachmentReplicationComponent.generated.h"

class UK25SurvivorChainAttachmentComponent;
class AK25Chain;
class AK25SurvivorChainAttachmentAnchor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK25_API UK25ChainAttachmentReplicationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StartChainReelback(AK25Chain* chainToAttach);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_LaunchInstantHitChainTowardsSurvivor(AK25Chain* newChainToAttach, AK25SurvivorChainAttachmentAnchor* targetAnchor, const FVector& startPosition);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DetachChains(UK25SurvivorChainAttachmentComponent* chainAttachementComponent, const TArray<AK25Chain*>& chainsToDetach, EK25ChainDetachmentReason detachmentReason, const TArray<AK25Chain*>& chainsAttached);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_AttachChainToAnchor(UK25SurvivorChainAttachmentComponent* chainAttachementComponent, AK25Chain* chainToAttach, AK25SurvivorChainAttachmentAnchor* anchorPoint);

public:
	UK25ChainAttachmentReplicationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK25ChainAttachmentReplicationComponent) { return 0; }
