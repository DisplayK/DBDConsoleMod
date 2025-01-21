#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LightSensitivityViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API ULightSensitivityViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ILightSensitivityViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void StartFadeOut();

};
