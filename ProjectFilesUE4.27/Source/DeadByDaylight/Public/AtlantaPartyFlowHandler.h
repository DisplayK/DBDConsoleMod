#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaPartyFlowHandler.generated.h"

UCLASS()
class UAtlantaPartyFlowHandler : public UObject
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void DisplayPartyFlowHandlerInfo();

public:
	UAtlantaPartyFlowHandler();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaPartyFlowHandler) { return 0; }
