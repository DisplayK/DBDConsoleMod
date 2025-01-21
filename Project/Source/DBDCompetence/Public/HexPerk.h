#pragma once

#include "CoreMinimal.h"
#include "TotemBoundPerk.h"
#include "EDBDScoreTypes.h"
#include "HexPerk.generated.h"

class ADBDPlayer;
class ATotem;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHexPerk : public UTotemBoundPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_PlayersWhoKnowCurse, Transient)
	TArray<ADBDPlayer*> _playersWhoKnowCurse;

	UPROPERTY(Transient)
	TArray<ADBDPlayer*> _oldPlayersWhoKnowCurse;

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateCursedStatusViewOnLocalPlayer();

public:
	UFUNCTION(BlueprintNativeEvent)
	void ReceiveGameplayEvent(EDBDScoreTypes gameplayEventType, float amount, AActor* instigator, AActor* target);

private:
	UFUNCTION()
	void OnRep_PlayersWhoKnowCurse();

public:
	UFUNCTION()
	void OnHexPerkGameplayEvent(EDBDScoreTypes gameplayEventType, float amount, AActor* instigator, AActor* target);

	UFUNCTION(BlueprintPure)
	bool IsCurseRevealedToPlayer(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetCurseRevealedToPlayer(ADBDPlayer* player, const bool revealed);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RevealCurseToAllSurvivors(bool revealed);

	UFUNCTION(BlueprintImplementableEvent)
	void Authority_Reactivate_BP(ATotem* totem);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHexPerk();
};

FORCEINLINE uint32 GetTypeHash(const UHexPerk) { return 0; }
