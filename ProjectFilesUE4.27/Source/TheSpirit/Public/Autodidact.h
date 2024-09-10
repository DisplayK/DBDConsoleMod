#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Autodidact.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAutodidact : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _maxTokenCountPerLevel;

	UPROPERTY(EditDefaultsOnly)
	float _progressionBonusPerToken;

	UPROPERTY(EditDefaultsOnly)
	float _initialSkillCheckProgressionPenalty;

public:
	UAutodidact();
};

FORCEINLINE uint32 GetTypeHash(const UAutodidact) { return 0; }
