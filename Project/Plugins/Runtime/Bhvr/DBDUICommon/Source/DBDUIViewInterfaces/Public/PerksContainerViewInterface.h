#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ScriptInterface.h"
#include "PerksContainerViewInterface.generated.h"

class IPerkViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UPerksContainerViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IPerksContainerViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IPerkViewInterface> GetPerkInterface(int32 index);

};
