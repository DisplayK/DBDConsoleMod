#pragma once

#include "CoreMinimal.h"
#include "AIGoal.generated.h"

class UObject;

USTRUCT()
struct FAIGoal
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UObject* Source;

	UPROPERTY()
	UObject* MetaGoal;

	UPROPERTY()
	UObject* Goal;

public:
	DBDBOTS_API FAIGoal();
};

FORCEINLINE uint32 GetTypeHash(const FAIGoal) { return 0; }
