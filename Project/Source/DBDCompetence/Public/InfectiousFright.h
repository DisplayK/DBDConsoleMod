#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "InfectiousFright.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UInfectiousFright : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	bool _revealPlayerInTerrorRadius;

	UPROPERTY(ReplicatedUsing=OnRep_PerkActivationCount, Transient)
	uint8 _perkActivationCount;

	UPROPERTY(Replicated, Transient)
	TArray<ACamperPlayer*> _revealedSurvivors;

	UPROPERTY(Transient)
	ACamperPlayer* _targetSurvivor;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void RevealSurvivorLocation(ACamperPlayer* target);

private:
	UFUNCTION()
	void OnRep_PerkActivationCount();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInfectiousFright();
};

FORCEINLINE uint32 GetTypeHash(const UInfectiousFright) { return 0; }
