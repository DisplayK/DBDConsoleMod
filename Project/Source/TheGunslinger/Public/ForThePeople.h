#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SecondaryInteractionProperties.h"
#include "ForThePeople.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UForThePeople : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_SetIsHealStartedOnServer)
	bool _isHealStartedOnServer;

	UPROPERTY(EditDefaultsOnly)
	float _brokenEffectDurations;

	UPROPERTY(EditDefaultsOnly)
	FSecondaryInteractionProperties _secondaryActionProperties;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_OnActionInputPressed();

	UFUNCTION()
	void OnRep_SetIsHealStartedOnServer() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnHealingAbilityUsed(ACamperPlayer* healingSurvivor, ACamperPlayer* healedSurvivor);

private:
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_OnHealAbilityUsed(ACamperPlayer* healingSurvivor, ACamperPlayer* healedSurvivor);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UForThePeople();
};

FORCEINLINE uint32 GetTypeHash(const UForThePeople) { return 0; }
