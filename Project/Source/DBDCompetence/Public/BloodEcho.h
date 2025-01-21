#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "BloodEcho.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBloodEcho : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _statusEffectDurationTag;

	UPROPERTY(EditDefaultsOnly)
	float _cooldownDuration;

public:
	UBloodEcho();
};

FORCEINLINE uint32 GetTypeHash(const UBloodEcho) { return 0; }
