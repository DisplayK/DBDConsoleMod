#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CombinedPartyFriendFacade.generated.h"

UCLASS()
class UCombinedPartyFriendFacade : public UObject
{
	GENERATED_BODY()

public:
	UCombinedPartyFriendFacade();
};

FORCEINLINE uint32 GetTypeHash(const UCombinedPartyFriendFacade) { return 0; }
