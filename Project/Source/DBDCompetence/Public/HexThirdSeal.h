#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexThirdSeal.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexThirdSeal : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_NumOfHitPlayers)
	int32 _numOfHitPlayers;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _thirdSealBlindnessEffect;

	UPROPERTY(EditDefaultsOnly)
	int32 _maximumBlindableSurvivors;

private:
	UFUNCTION()
	void OnRep_NumOfHitPlayers();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHexThirdSeal();
};

FORCEINLINE uint32 GetTypeHash(const UHexThirdSeal) { return 0; }
