#pragma once

#include "CoreMinimal.h"
#include "DateTimeProvider.h"
#include "DBDDateTimeProvider.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDDateTimeProvider : public UDateTimeProvider
{
	GENERATED_BODY()

public:
	UDBDDateTimeProvider();
};

FORCEINLINE uint32 GetTypeHash(const UDBDDateTimeProvider) { return 0; }
