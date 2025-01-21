#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "PerkCharmDataGenerationCommandlet.generated.h"

UCLASS(NonTransient)
class UPerkCharmDataGenerationCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UPerkCharmDataGenerationCommandlet();
};

FORCEINLINE uint32 GetTypeHash(const UPerkCharmDataGenerationCommandlet) { return 0; }
