#pragma once

#include "CoreMinimal.h"
#include "DBDOutlineComponentConfiguration.h"
#include "DBDOutlineComponentTranslucentConfiguration.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDOutlineComponentTranslucentConfiguration : public UDBDOutlineComponentConfiguration
{
	GENERATED_BODY()

public:
	UDBDOutlineComponentTranslucentConfiguration();
};

FORCEINLINE uint32 GetTypeHash(const UDBDOutlineComponentTranslucentConfiguration) { return 0; }
