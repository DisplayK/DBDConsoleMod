#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K28CustomizationAnimationSelector.generated.h"

class UDataTable;

UCLASS()
class UK28CustomizationAnimationSelector : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UDataTable* _customizationAnimationMappings;

public:
	UK28CustomizationAnimationSelector();
};

FORCEINLINE uint32 GetTypeHash(const UK28CustomizationAnimationSelector) { return 0; }
