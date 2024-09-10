#pragma once

#include "CoreMinimal.h"
#include "BaseLoadoutPartViewData.h"
#include "InputCoreTypes.h"
#include "PowerViewData.generated.h"

USTRUCT(BlueprintType)
struct FPowerViewData: public FBaseLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FKey InputKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsRechargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsActivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProgressValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowKeyPrompt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsCountDisplayForced;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailable;

public:
	DBDUIVIEWINTERFACES_API FPowerViewData();
};

FORCEINLINE uint32 GetTypeHash(const FPowerViewData) { return 0; }
