#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "EAITerrorLevel.h"
#include "AISenseConfig_Terror.generated.h"

class UAISense_Terror;

UCLASS(EditInlineNew)
class DEADBYDAYLIGHT_API UAISenseConfig_Terror : public UAISenseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, NoClear)
	TSubclassOf<UAISense_Terror> Implementation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float MaxBreathingSoundRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TMap<EAITerrorLevel, float> TerrorRanges;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FAISenseAffiliationFilter DetectionByAffiliation;

public:
	UAISenseConfig_Terror();
};

FORCEINLINE uint32 GetTypeHash(const UAISenseConfig_Terror) { return 0; }
