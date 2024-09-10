#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KillerBloodFXInterface.generated.h"

UINTERFACE(Blueprintable)
class DEADBYDAYLIGHT_API UKillerBloodFXInterface : public UInterface
{
	GENERATED_BODY()
};

class DEADBYDAYLIGHT_API IKillerBloodFXInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void StopBloodSplatter();

	UFUNCTION(BlueprintImplementableEvent)
	void PlayBloodSplatter();

};
