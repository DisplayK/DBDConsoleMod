#pragma once

#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "CatalogValidationCommandlet.generated.h"

UCLASS(NonTransient)
class UCatalogValidationCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	UCatalogValidationCommandlet();
};

FORCEINLINE uint32 GetTypeHash(const UCatalogValidationCommandlet) { return 0; }
