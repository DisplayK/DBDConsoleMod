#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GenericTeamAgentInterface.h"
#include "AITrailEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAITrailEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StartTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float EndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Instigator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag IgnoreOnPerkTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGenericTeamId TeamIdentifier;

public:
	DEADBYDAYLIGHT_API FAITrailEvent();
};

FORCEINLINE uint32 GetTypeHash(const FAITrailEvent) { return 0; }
