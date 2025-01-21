#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KillerStatusData.generated.h"

class UKillerStatusData;

UCLASS(BlueprintType, Abstract)
class DBDUIVIEWINTERFACES_API UKillerStatusData : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	bool IsEqual(const UKillerStatusData* other) const;

public:
	UKillerStatusData();
};

FORCEINLINE uint32 GetTypeHash(const UKillerStatusData) { return 0; }
