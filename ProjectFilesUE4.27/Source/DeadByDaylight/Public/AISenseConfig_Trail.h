#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig_Trail.generated.h"

class UAISense_Trail;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseConfig_Trail : public UAISenseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, NoClear)
	TSubclassOf<UAISense_Trail> Implementation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MaxRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float PeripheralVisionAngleDegrees;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FAISenseAffiliationFilter DetectionByAffiliation;

public:
	UAISenseConfig_Trail();
};

FORCEINLINE uint32 GetTypeHash(const UAISenseConfig_Trail) { return 0; }
