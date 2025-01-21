#pragma once

#include "CoreMinimal.h"
#include "EPopupPriority.h"
#include "UObject/NoExportTypes.h"
#include "BasePopupViewData.generated.h"

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UBasePopupViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPopupPriority Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Message;

public:
	UBasePopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UBasePopupViewData) { return 0; }
