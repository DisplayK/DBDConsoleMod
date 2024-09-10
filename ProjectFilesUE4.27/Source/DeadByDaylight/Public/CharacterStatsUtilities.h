#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterStatsUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UCharacterStatsUtilities : public UObject
{
	GENERATED_BODY()

public:
	UCharacterStatsUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterStatsUtilities) { return 0; }
