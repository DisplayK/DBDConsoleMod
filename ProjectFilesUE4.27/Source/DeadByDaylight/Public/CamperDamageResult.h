#pragma once

#include "CoreMinimal.h"
#include "CamperDamageResult.generated.h"

class AActor;
class UGameplayModifierContainer;
class ACharacter;

USTRUCT()
struct FCamperDamageResult
{
	GENERATED_BODY()

public:
	UPROPERTY()
	AActor* DamageSource;

	UPROPERTY()
	ACharacter* DamagePlayerOwner;

	UPROPERTY(Export)
	UGameplayModifierContainer* KOPreventedSource;

public:
	DEADBYDAYLIGHT_API FCamperDamageResult();
};

FORCEINLINE uint32 GetTypeHash(const FCamperDamageResult) { return 0; }
