#pragma once

#include "CoreMinimal.h"
#include "BasePopupViewData.h"
#include "PopupButtonViewData.h"
#include "GenericPopupViewData.generated.h"

UCLASS()
class DBDUIVIEWINTERFACES_API UGenericPopupViewData : public UBasePopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPopupButtonViewData ProgressionData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPopupButtonViewData RegressionData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPopupButtonViewData AlternativeData;

public:
	UGenericPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UGenericPopupViewData) { return 0; }
