#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "K25SurvivorChainAttachmentData.h"
#include "UObject/NoExportTypes.h"
#include "K25SurvivorChainAttachmentAnchor.generated.h"

class ACamperPlayer;
class AK25Chain;

UCLASS()
class AK25SurvivorChainAttachmentAnchor : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _chainMaxBreakingLength;

private:
	UPROPERTY(EditAnywhere)
	float _timeBetweenTrace;

	UPROPERTY(ReplicatedUsing=OnRep_AttachmentData, Transient)
	FK25SurvivorChainAttachmentData _attachmentData;

	UPROPERTY(Transient)
	TWeakObjectPtr<ACamperPlayer> _owningSurvivor;

	UPROPERTY(Transient)
	TWeakObjectPtr<AK25Chain> _attachedChain;

	UPROPERTY(Transient)
	FVector _cachedPullDirection;

private:
	UFUNCTION()
	void OnRep_AttachmentData();

public:
	UFUNCTION(BlueprintPure)
	int32 GetNumberOfChainsAttached() const;

	UFUNCTION(BlueprintPure)
	FVector GetChainsPullLocation() const;

	UFUNCTION(BlueprintPure)
	FVector GetChainsPullDirection() const;

	UFUNCTION(BlueprintPure)
	float GetChainPullDirectionAngle() const;

	UFUNCTION(BlueprintNativeEvent)
	FVector GetChainAttachmentLocation() const;

	UFUNCTION(BlueprintPure)
	FK25SurvivorChainAttachmentData GetChainAttachmentData() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainDetached(AK25Chain* chainToDetach);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnChainAttached(AK25Chain* chainToAttach);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK25SurvivorChainAttachmentAnchor();
};

FORCEINLINE uint32 GetTypeHash(const AK25SurvivorChainAttachmentAnchor) { return 0; }
