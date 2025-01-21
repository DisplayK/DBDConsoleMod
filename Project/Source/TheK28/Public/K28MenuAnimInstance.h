#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseMenuAnimInstance.h"
#include "K28MenuAnimInstance.generated.h"

class UK28CustomizationAnimationSelector;

UCLASS(NonTransient)
class UK28MenuAnimInstance : public UBaseMenuAnimInstance
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK28CustomizationAnimationSelector> _customizationAnimationSelectorClass;

	UPROPERTY(Transient)
	UK28CustomizationAnimationSelector* _customizationAnimationSelector;

protected:
	UFUNCTION(BlueprintPure)
	int32 GetAnimationMappingIndex() const;

	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnCustomizationAnimationMappingIDChanged(int32 animationMappingIndex);

public:
	UK28MenuAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK28MenuAnimInstance) { return 0; }
