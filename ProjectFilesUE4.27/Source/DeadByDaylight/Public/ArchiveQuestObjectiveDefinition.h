#pragma once

#include "CoreMinimal.h"
#include "EQuestProgressionType.h"
#include "DBDTableRowBaseWithId.h"
#include "ArchiveQuestObjectiveDefinition.generated.h"

USTRUCT(BlueprintType)
struct FArchiveQuestObjectiveDefinition: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText RulesDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EQuestProgressionType ProgressionType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FName> DescriptionParameters;

public:
	DEADBYDAYLIGHT_API FArchiveQuestObjectiveDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveQuestObjectiveDefinition) { return 0; }
