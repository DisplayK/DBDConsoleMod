#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PartyFacade.generated.h"

UCLASS()
class SOCIALPARTY_API UPartyFacade : public UObject
{
	GENERATED_BODY()

public:
	UPartyFacade();
};

FORCEINLINE uint32 GetTypeHash(const UPartyFacade) { return 0; }
