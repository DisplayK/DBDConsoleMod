#pragma once

#include "CoreMinimal.h"
#include "SlasherAttackPickerComponent.h"
#include "BlightAttackPicker.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBlightAttackPicker : public USlasherAttackPickerComponent
{
	GENERATED_BODY()

public:
	UBlightAttackPicker();
};

FORCEINLINE uint32 GetTypeHash(const UBlightAttackPicker) { return 0; }
