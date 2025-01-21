#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CheatUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UCheatUtilities : public UObject
{
	GENERATED_BODY()

public:
	UCheatUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UCheatUtilities) { return 0; }
