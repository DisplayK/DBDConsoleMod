#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ToolBoxInterface.generated.h"

class UChargerComponent;

UINTERFACE(Blueprintable)
class DEADBYDAYLIGHT_API UToolBoxInterface : public UInterface
{
	GENERATED_BODY()
};

class DEADBYDAYLIGHT_API IToolBoxInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UChargerComponent* GetChargerComponent();

};
