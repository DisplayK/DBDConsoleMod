#pragma once

#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "KnockoutSurvivorFoundAnalytics.generated.h"

USTRUCT()
struct FKnockoutSurvivorFoundAnalytics: public FBasePerkAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString RescuingSurvivorMirrorsId;

	UPROPERTY()
	FString FoundSurvivorMirrorsId;

public:
	DBDANALYTICS_API FKnockoutSurvivorFoundAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FKnockoutSurvivorFoundAnalytics) { return 0; }
