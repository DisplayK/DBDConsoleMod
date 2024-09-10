#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AIDetectedStimulus.h"
#include "Perception/AIPerceptionComponent.h"
#include "AIDisplayDebugInterface.h"
#include "DBDAIPerceptionComponent.generated.h"

class UAISenseConfig;
class UObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDAIPerceptionComponent : public UAIPerceptionComponent, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<UClass*, UObject*> _objOverridingSenses;

	UPROPERTY(Transient)
	TArray<UAISenseConfig*> _originalSenseConfigs;

	UPROPERTY(Transient)
	TArray<FAIDetectedStimulus> _detectedHostileStimuli;

	UPROPERTY(Transient)
	FAIDetectedStimulus _bestDetectedHostileStimulus;

	UPROPERTY(Transient)
	FAIDetectedStimulus _lastBestDetectedHostileStimulusInMemory;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter _activePhaseWalkingNoiseMaxRange;

	UPROPERTY(EditDefaultsOnly)
	float ThreatDividerForNonControlledActor;

	UPROPERTY(EditDefaultsOnly)
	float HighThreatDistanceForNonControlledActor;

	UPROPERTY(EditDefaultsOnly)
	float TerrorDistanceMultiplierForNonControlledActor;

public:
	UDBDAIPerceptionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAIPerceptionComponent) { return 0; }
