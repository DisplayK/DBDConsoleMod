#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IdentityValidation.generated.h"

UCLASS()
class UIdentityValidation : public UObject
{
	GENERATED_BODY()

public:
	UIdentityValidation();
};

FORCEINLINE uint32 GetTypeHash(const UIdentityValidation) { return 0; }
