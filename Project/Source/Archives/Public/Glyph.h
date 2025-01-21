#pragma once

#include "CoreMinimal.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "SpecialBehaviourInteractable.h"
#include "EAllowedPlayerType.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "Glyph.generated.h"

class ADBDPlayer;
class UDBDOutlineComponent;
class UInteractor;
class UChargeableComponent;
class ADBDPlayerState;
class UGlyphInteraction;
class UPrimitiveComponent;
class UNearTrackedActorComponent;
class UStaticMeshComponent;
class AActor;

UCLASS()
class AGlyph : public ASpecialBehaviourInteractable, public INavAgentInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(ReplicatedUsing=OnRep_PlayersWithVisibility, Transient)
	TArray<ADBDPlayer*> _playersWithVisibility;

	UPROPERTY(Transient)
	TArray<ADBDPlayer*> _oldPlayersWithVisibility;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName _specialBehaviourId;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	EAllowedPlayerType _allowedPlayerType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool _canOnlyBeInteractedOnByOnePlayer;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool _canBeInteractedAfterQuestCompleted;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TWeakObjectPtr<ADBDPlayer> lastPlayerToStartInteraction;

	UPROPERTY(Replicated, Transient)
	TArray<TWeakObjectPtr<ADBDPlayerState>> _isGlyphActivatedForPlayer;

	UPROPERTY(EditDefaultsOnly)
	bool _grantChallengeProgress;

	UPROPERTY(EditDefaultsOnly)
	bool _grantQuestEventProgressOnInteraction;

	UPROPERTY(EditDefaultsOnly, Replicated)
	bool _isActive;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UGlyphInteraction* _glyphInteraction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UGlyphInteraction* _glyphInteractionKiller;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _glyphInteractionChargeable;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _glyphInteractionChargeableKiller;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _glyphInteractor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UNearTrackedActorComponent* _nearTrackedActorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _glyphInteractionZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UStaticMeshComponent* _glyphMesh;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _associatedSurvivorScoreEvent;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _associatedKillerScoreEvent;

	UPROPERTY(EditDefaultsOnly)
	bool _isScoreRewardExponentialForMultipleGlyphs;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _glyphInteractionSecondsToCharge;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _glyphInteractionSecondsToChargeKiller;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _glyphDetectionRange;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _auraColorWhileInteracting;

	UPROPERTY(Replicated, Transient)
	TArray<ADBDPlayer*> _playersThatInteractedWithGlyph;

protected:
	UFUNCTION()
	void OnRep_PlayersWithVisibility();

public:
	UFUNCTION(BlueprintPure)
	bool IsPlayerOwner(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintPure)
	bool DoesLocalPlayerHaveVisibility();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStoppedInteracting();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStartedInteracting(ADBDPlayer* interactingPlayer, float interactionDuration);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnGlyphVisibilityChanged(ADBDPlayer* interactingPlayer, bool isVisible);

private:
	UFUNCTION()
	void Authority_TrackPlayerWithBehaviourID(const ADBDPlayer* dbdPlayer);

	UFUNCTION()
	void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, const AActor* trackedActor);

	UFUNCTION()
	void Authority_OnIntroCompleted();

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintAuthorityOnly)
	void Authority_OnInteractionCompleted(ADBDPlayer* interactingPlayer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AGlyph();
};

FORCEINLINE uint32 GetTypeHash(const AGlyph) { return 0; }
