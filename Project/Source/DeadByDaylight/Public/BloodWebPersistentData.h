#pragma once

#include "CoreMinimal.h"
#include "BloodWebRingPersistentData.h"
#include "UObject/NoExportTypes.h"
#include "BloodWebPersistentData.generated.h"

USTRUCT()
struct FBloodWebPersistentData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 VersionNumber;

	UPROPERTY()
	int32 Level;

	UPROPERTY()
	TArray<FBloodWebRingPersistentData> RingData;

	UPROPERTY()
	TArray<FName> Paths;

	UPROPERTY()
	FString EntityCurrentNode;

	UPROPERTY()
	FDateTime GenerationDate;

public:
	DEADBYDAYLIGHT_API FBloodWebPersistentData();
};

FORCEINLINE uint32 GetTypeHash(const FBloodWebPersistentData) { return 0; }
