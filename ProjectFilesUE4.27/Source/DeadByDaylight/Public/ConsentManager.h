#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConsentManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UConsentManager : public UObject
{
	GENERATED_BODY()

public:
	UConsentManager();
};

FORCEINLINE uint32 GetTypeHash(const UConsentManager) { return 0; }
