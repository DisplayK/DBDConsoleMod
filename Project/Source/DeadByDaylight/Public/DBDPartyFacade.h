#pragma once

#include "CoreMinimal.h"
#include "PartyFacade.h"
#include "DBDPartyFacade.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDPartyFacade : public UPartyFacade
{
	GENERATED_BODY()

public:
	UDBDPartyFacade();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPartyFacade) { return 0; }
