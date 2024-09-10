#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "SaveGameSaveResultAnalytics.generated.h"

USTRUCT()
struct FSaveGameSaveResultAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool SaveSuccessful;

	UPROPERTY()
	int32 ResponseCode;

public:
	DBDANALYTICS_API FSaveGameSaveResultAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FSaveGameSaveResultAnalytics) { return 0; }
