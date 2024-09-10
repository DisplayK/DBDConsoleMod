#pragma once

#include "CoreMinimal.h"
#include "EventObjectComponent.h"
#include "GameplayTagContainer.h"
#include "EOfferingEffectType.h"
#include "EventGeneratorComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UEventGeneratorComponent : public UEventObjectComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _genCompletedScoreEvent;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _genCompletedNoOfferingScoreEvent;

	UPROPERTY(EditDefaultsOnly)
	EOfferingEffectType _offeringEffectTypeNeeded;

	UPROPERTY(EditAnywhere)
	bool _updateOutlineForSurvivor;

	UPROPERTY(EditAnywhere)
	bool _updateOutlineForSlasher;

private:
	UFUNCTION()
	void Authority_FireGenCompletedEventScore(bool isAutoCompleted);

public:
	UEventGeneratorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEventGeneratorComponent) { return 0; }
