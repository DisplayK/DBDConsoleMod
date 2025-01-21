#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "UpdateJournalVignetteCinematicsCommandlet.generated.h"

UCLASS(NonTransient)
class UUpdateJournalVignetteCinematicsCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UUpdateJournalVignetteCinematicsCommandlet();
};

FORCEINLINE uint32 GetTypeHash(const UUpdateJournalVignetteCinematicsCommandlet) { return 0; }
