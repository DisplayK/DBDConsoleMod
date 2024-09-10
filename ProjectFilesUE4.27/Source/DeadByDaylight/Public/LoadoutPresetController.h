#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LoadoutPresetController.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ULoadoutPresetController : public UObject
{
	GENERATED_BODY()

public:
	ULoadoutPresetController();
};

FORCEINLINE uint32 GetTypeHash(const ULoadoutPresetController) { return 0; }
