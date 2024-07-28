#pragma once

#include "CoreMinimal.h"
#include "MenuFlowTabData.h"
#include "MenuFlowButtonPressData.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MenuFlowAnalytics.generated.h"

USTRUCT()
struct FMenuFlowAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString CurrentContext;

	UPROPERTY()
	FString PreviousContext;

	UPROPERTY()
	float TimeOnPreviousContext;

	UPROPERTY()
	FString ContextChangeTimetamp;

	UPROPERTY()
	FString MatchId;

	UPROPERTY()
	FString LobbyId;

	UPROPERTY()
	TArray<FMenuFlowTabData> Tabs;

	UPROPERTY()
	TArray<FMenuFlowButtonPressData> Buttons;

public:
	DBDANALYTICS_API FMenuFlowAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMenuFlowAnalytics) { return 0; }
