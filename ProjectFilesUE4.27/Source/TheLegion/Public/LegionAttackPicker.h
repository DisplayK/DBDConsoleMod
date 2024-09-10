#pragma once

#include "CoreMinimal.h"
#include "SlasherAttackPickerComponent.h"
#include "LegionAttackPicker.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THELEGION_API ULegionAttackPicker : public USlasherAttackPickerComponent
{
	GENERATED_BODY()

public:
	ULegionAttackPicker();
};

FORCEINLINE uint32 GetTypeHash(const ULegionAttackPicker) { return 0; }
