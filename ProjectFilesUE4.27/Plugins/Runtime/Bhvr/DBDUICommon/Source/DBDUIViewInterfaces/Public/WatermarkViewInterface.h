#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WatermarkViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UWatermarkViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IWatermarkViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSteamValuesText(const FString& SteamName, const FString& SteamId);

};
