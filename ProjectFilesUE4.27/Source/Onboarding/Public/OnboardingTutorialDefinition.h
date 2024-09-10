#pragma once

#include "CoreMinimal.h"
#include "EOnboardingTutorialType.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDTableRowBaseWithId.h"
#include "EOnboardingTutorialButtonStyle.h"
#include "OnboardingTutorialDefinition.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FOnboardingTutorialDefinition: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText CompletedDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText CompletedDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EOnboardingTutorialType TutorialType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EOnboardingTutorialButtonStyle ButtonStyle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString LevelId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 DefaultCharacterId;

public:
	ONBOARDING_API FOnboardingTutorialDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FOnboardingTutorialDefinition) { return 0; }
