#pragma once

#include "CoreMinimal.h"
#include "EPawnType.h"
#include "Templates/SubclassOf.h"
#include "EStatusEffectSpawnerReceiverStrategy.h"
#include "StatusEffectSpawnData.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FStatusEffectSpawnData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FString DEPRECATED_EffectId;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> EffectClass;

	UPROPERTY(EditDefaultsOnly)
	float CustomParam;

	UPROPERTY(EditDefaultsOnly)
	EStatusEffectSpawnerReceiverStrategy ReceiverStrategy;

	UPROPERTY(EditDefaultsOnly)
	EPawnType PawnType;

	UPROPERTY(EditDefaultsOnly)
	bool SkipOriginatingPlayer;

public:
	DBDCOMPETENCE_API FStatusEffectSpawnData();
};

FORCEINLINE uint32 GetTypeHash(const FStatusEffectSpawnData) { return 0; }
