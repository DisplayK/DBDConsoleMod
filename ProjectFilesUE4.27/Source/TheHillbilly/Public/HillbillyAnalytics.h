#pragma once

#include "CoreMinimal.h"
#include "ChainsawEventWhileCamping.h"
#include "ChainsawEvent.h"
#include "ChainsawAnalytics.h"
#include "HillbillyAnalytics.generated.h"

USTRUCT()
struct FHillbillyAnalytics: public FChainsawAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<FChainsawEvent> OverheatEvents;

	UPROPERTY(Transient)
	TArray<FChainsawEvent> OverheatWhileSprintingEvents;

	UPROPERTY(Transient)
	TArray<FChainsawEventWhileCamping> OverheatWhileCampingEvents;

	UPROPERTY(Transient)
	TArray<FChainsawEvent> RevFromZeroHeatEvents;

public:
	THEHILLBILLY_API FHillbillyAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FHillbillyAnalytics) { return 0; }
