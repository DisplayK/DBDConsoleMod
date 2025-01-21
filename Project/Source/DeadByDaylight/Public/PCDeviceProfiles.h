#pragma once

#include "CoreMinimal.h"
#include "ResolutionQualityPair.h"
#include "DBDTableRowBase.h"
#include "PCDeviceProfiles.generated.h"

USTRUCT(BlueprintType)
struct FPCDeviceProfiles: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CPU;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName GPU;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FResolutionQualityPair> Pairs;

public:
	DEADBYDAYLIGHT_API FPCDeviceProfiles();
};

FORCEINLINE uint32 GetTypeHash(const FPCDeviceProfiles) { return 0; }
