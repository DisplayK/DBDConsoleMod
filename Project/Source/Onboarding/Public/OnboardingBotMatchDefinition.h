#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "OnboardingBotMatchDefinition.generated.h"

USTRUCT(BlueprintType)
struct FOnboardingBotMatchDefinition: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName DefaultMapId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 DefaultSurvivorId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 DefaultKillerId;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<int32> DefaultBotsId;

public:
	ONBOARDING_API FOnboardingBotMatchDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FOnboardingBotMatchDefinition) { return 0; }
