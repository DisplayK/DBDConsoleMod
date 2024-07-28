#pragma once

#include "CoreMinimal.h"
#include "EOnboardingStepStatus.h"
#include "EOnboardingTutorialButtonStyle.h"
#include "RewardWrapperViewData.h"
#include "OnboardingTutorialButtonViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOnboardingTutorialButtonViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOnboardingStepStatus StepStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StepId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TutorialId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRewardWrapperViewData> RewardsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOnboardingTutorialButtonStyle ButtonStyle;

public:
	DBDUIVIEWSCORE_API FOnboardingTutorialButtonViewData();
};

FORCEINLINE uint32 GetTypeHash(const FOnboardingTutorialButtonViewData) { return 0; }
