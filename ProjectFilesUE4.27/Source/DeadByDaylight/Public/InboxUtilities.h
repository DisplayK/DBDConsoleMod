#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InboxUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UInboxUtilities : public UObject
{
	GENERATED_BODY()

public:
	UInboxUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UInboxUtilities) { return 0; }
