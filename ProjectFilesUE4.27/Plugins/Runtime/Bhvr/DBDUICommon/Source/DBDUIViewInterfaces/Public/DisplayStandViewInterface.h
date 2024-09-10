#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DisplayStandViewData.h"
#include "DisplayStandViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UDisplayStandViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IDisplayStandViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetDragZone(const FDisplayStandViewData& layoutData);

};
