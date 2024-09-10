#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "DailyRitualPossibleCharacters.h"
#include "EDBDScoreTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "DailyRitualDefinition.generated.h"

class URitualEvaluatorBase;

USTRUCT(BlueprintType)
struct FDailyRitualDefinition: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString RitualId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FDailyRitualPossibleCharacters PossibleCharacters;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<EDBDScoreTypes> TrackedEvents;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FGameplayTag> TrackedGameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<URitualEvaluatorBase> Evaluator;

public:
	DEADBYDAYLIGHT_API FDailyRitualDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRitualDefinition) { return 0; }
