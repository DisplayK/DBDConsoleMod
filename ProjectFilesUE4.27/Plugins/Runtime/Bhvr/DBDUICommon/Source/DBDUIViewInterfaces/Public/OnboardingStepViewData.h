#pragma once

#include "CoreMinimal.h"
#include "EOnboardingStepStatus.h"
#include "OnboardingTutorialViewData.h"
#include "OnboardingStepViewData.generated.h"

USTRUCT(BlueprintType)
struct FOnboardingStepViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString StepId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EOnboardingStepStatus Status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FOnboardingTutorialViewData> Tutorials;

public:
	DBDUIVIEWINTERFACES_API FOnboardingStepViewData();
};

FORCEINLINE uint32 GetTypeHash(const FOnboardingStepViewData) { return 0; }
