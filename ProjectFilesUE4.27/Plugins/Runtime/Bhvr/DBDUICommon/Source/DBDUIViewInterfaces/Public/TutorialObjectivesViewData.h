#pragma once

#include "CoreMinimal.h"
#include "InteractionPromptViewData.h"
#include "TutorialObjectivesViewData.generated.h"

USTRUCT(BlueprintType)
struct FTutorialObjectivesViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInteractionPromptViewData PrimaryInteractionPromptViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInteractionPromptViewData SecondaryInteractionPromptViewData;

public:
	DBDUIVIEWINTERFACES_API FTutorialObjectivesViewData();
};

FORCEINLINE uint32 GetTypeHash(const FTutorialObjectivesViewData) { return 0; }
