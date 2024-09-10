#pragma once

#include "CoreMinimal.h"
#include "DBDAIBTController.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "Perception/AIPerceptionTypes.h"
#include "GuardController.generated.h"

class AActor;

UCLASS()
class AGuardController : public ADBDAIBTController
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _cannotHuntWhileIdleTags;

	UPROPERTY(EditDefaultsOnly)
	FName _isPatrollingKey;

	UPROPERTY(EditDefaultsOnly)
	FName _patrolDestinationKey;

	UPROPERTY(EditDefaultsOnly)
	FName _patrolUseDirectPathKey;

	UPROPERTY(EditDefaultsOnly)
	FName _isHuntingKey;

	UPROPERTY(EditDefaultsOnly)
	FName _huntedSurvivorKey;

	UPROPERTY(EditDefaultsOnly)
	FName _huntDestinationKey;

	UPROPERTY(EditDefaultsOnly)
	FName _huntUseDirectPathKey;

	UPROPERTY(EditDefaultsOnly)
	FName _huntShouldSearchLockerKey;

private:
	UFUNCTION()
	void OnTargetPerceptionUpdated(AActor* actor, FAIStimulus stimulus);

	UFUNCTION()
	void OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise);

public:
	AGuardController();
};

FORCEINLINE uint32 GetTypeHash(const AGuardController) { return 0; }
