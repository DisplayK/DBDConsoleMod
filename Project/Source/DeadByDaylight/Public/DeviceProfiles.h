#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "DeviceProfiles.generated.h"

USTRUCT(BlueprintType)
struct FDeviceProfiles: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText CPU;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText GPU;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Quality;

public:
	DEADBYDAYLIGHT_API FDeviceProfiles();
};

FORCEINLINE uint32 GetTypeHash(const FDeviceProfiles) { return 0; }
