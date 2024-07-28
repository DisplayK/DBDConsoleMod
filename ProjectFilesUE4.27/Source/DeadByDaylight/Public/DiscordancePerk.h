#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GeneratorQueryHandlePair.h"
#include "DiscordancePerk.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDiscordancePerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<FGeneratorQueryHandlePair> _generatorQueryHandlePairs;

	UPROPERTY(EditDefaultsOnly)
	float _effectRange;

	UPROPERTY(EditDefaultsOnly)
	float _auraLingerDuration;

	UPROPERTY(EditDefaultsOnly)
	int32 _numSurvivorsRepairingToReveal;

	UPROPERTY(Replicated)
	bool _isPerkConsideredActive;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_AddLingeringGeneratorAura(AGenerator* generator);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_AddGeneratorAura(AGenerator* generator);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDiscordancePerk();
};

FORCEINLINE uint32 GetTypeHash(const UDiscordancePerk) { return 0; }
