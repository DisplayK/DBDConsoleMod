#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "BetterTogether.generated.h"

class UStatusEffect;
class ADBDPlayer;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBetterTogether : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	bool ShouldRevealKiller;

	UPROPERTY(EditDefaultsOnly)
	bool ShouldRevealSurvivors;

	UPROPERTY(EditDefaultsOnly)
	float RevealDistance;

	UPROPERTY()
	TArray<ADBDPlayer*> _affectedCampers;

private:
	UPROPERTY(Transient)
	AActor* _genToReveal;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _durationByLevel;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedSurvivorRevealEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedKillerRevealEffect;

private:
	UFUNCTION()
	void OnStartedGeneratorRepair(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UFUNCTION(BlueprintCallable)
	float GetRevealDistance();

public:
	UBetterTogether();
};

FORCEINLINE uint32 GetTypeHash(const UBetterTogether) { return 0; }
