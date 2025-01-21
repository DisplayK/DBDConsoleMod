#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "PopupButtonViewData.generated.h"

USTRUCT(BlueprintType)
struct FPopupButtonViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FKey Key;

public:
	DBDUIVIEWINTERFACES_API FPopupButtonViewData();
};

FORCEINLINE uint32 GetTypeHash(const FPopupButtonViewData) { return 0; }
