#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EInteractionPromptType.h"
#include "ETutorialObjectivePlayerActionMapping.h"
#include "TutorialObjective.generated.h"

USTRUCT(BlueprintType)
struct FTutorialObjective: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsCompletionAnalyticEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionPromptType InteractionPromptType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETutorialObjectivePlayerActionMapping PlayerAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionPromptType SecondaryInteractionPromptType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETutorialObjectivePlayerActionMapping SecondaryPlayerAction;

public:
	DEADBYDAYLIGHT_API FTutorialObjective();
};

FORCEINLINE uint32 GetTypeHash(const FTutorialObjective) { return 0; }
