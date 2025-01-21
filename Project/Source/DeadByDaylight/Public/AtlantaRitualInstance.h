#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreTypes.h"
#include "EPlayerRole.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaRitualDifficulty.h"
#include "AtlantaRitualInstance.generated.h"

class UAtlantaRitualEvaluatorBase;

USTRUCT(BlueprintType)
struct FAtlantaRitualInstance
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName RitualKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY()
	TArray<EDBDScoreTypes> TrackedEvents;

	UPROPERTY()
	TArray<FString> TrackedGameEvents;

	UPROPERTY(Transient)
	UAtlantaRitualEvaluatorBase* Evaluator;

	UPROPERTY()
	FAtlantaRitualDifficulty Difficulty;

	UPROPERTY()
	float Progress;

	UPROPERTY()
	bool Active;

	UPROPERTY()
	FDateTime ExpiryDate;

public:
	DEADBYDAYLIGHT_API FAtlantaRitualInstance();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaRitualInstance) { return 0; }
