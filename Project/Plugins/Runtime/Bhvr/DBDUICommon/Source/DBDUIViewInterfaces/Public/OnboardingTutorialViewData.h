#pragma once

#include "CoreMinimal.h"
#include "EOnboardingTutorialButtonStyle.h"
#include "RewardWrapperViewData.h"
#include "EOnboardingTutorialType.h"
#include "OnboardingTutorialViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOnboardingTutorialViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString TutorialId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool Completed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool MainRewardClaimed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FRewardWrapperViewData> MainRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FRewardWrapperViewData> AlternativeRewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EOnboardingTutorialType TutorialType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	EOnboardingTutorialButtonStyle ButtonStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UTexture2D* Icon;

public:
	DBDUIVIEWINTERFACES_API FOnboardingTutorialViewData();
};

FORCEINLINE uint32 GetTypeHash(const FOnboardingTutorialViewData) { return 0; }
