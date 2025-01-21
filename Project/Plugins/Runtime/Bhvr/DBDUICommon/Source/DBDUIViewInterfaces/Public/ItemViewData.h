#pragma once

#include "CoreMinimal.h"
#include "BaseLoadoutPartViewData.h"
#include "InputCoreTypes.h"
#include "ItemViewData.generated.h"

USTRUCT(BlueprintType)
struct FItemViewData: public FBaseLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsEnergyTypeValid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EnergyLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FKey InputKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowKeyPrompt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsLimitedItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAvailable;

public:
	DBDUIVIEWINTERFACES_API FItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const FItemViewData) { return 0; }
