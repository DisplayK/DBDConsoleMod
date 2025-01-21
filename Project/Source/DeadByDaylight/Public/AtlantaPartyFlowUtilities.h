#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaPartyFlowUtilities.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UAtlantaPartyFlowUtilities : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static bool IsCurrentPlayerInParty();

	UFUNCTION(BlueprintCallable)
	static bool IsCurrentPlayerAloneInParty();

public:
	UAtlantaPartyFlowUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaPartyFlowUtilities) { return 0; }
