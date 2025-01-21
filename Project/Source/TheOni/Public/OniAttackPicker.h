#pragma once

#include "CoreMinimal.h"
#include "SlasherAttackPickerComponent.h"
#include "OniAttackPicker.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UOniAttackPicker : public USlasherAttackPickerComponent
{
	GENERATED_BODY()

public:
	UOniAttackPicker();
};

FORCEINLINE uint32 GetTypeHash(const UOniAttackPicker) { return 0; }
