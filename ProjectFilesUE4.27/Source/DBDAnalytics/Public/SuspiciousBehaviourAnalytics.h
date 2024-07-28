#pragma once

#include "CoreMinimal.h"
#include "BaseCheatAnalytics.h"
#include "SuspiciousBehaviourAnalytics.generated.h"

USTRUCT()
struct FSuspiciousBehaviourAnalytics: public FBaseCheatAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Type;

	UPROPERTY()
	FString ExtraField1String;

	UPROPERTY()
	int64 ExtraField1Integer;

	UPROPERTY()
	double ExtraField1Floating;

	UPROPERTY()
	FString ExtraField2String;

	UPROPERTY()
	int64 ExtraField2Integer;

	UPROPERTY()
	double ExtraField2Floating;

public:
	DBDANALYTICS_API FSuspiciousBehaviourAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FSuspiciousBehaviourAnalytics) { return 0; }
