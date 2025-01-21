#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BasePopupViewInterface.generated.h"

class UBasePopupViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UBasePopupViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IBasePopupViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Leave();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Enter(UBasePopupViewData* data);

};
