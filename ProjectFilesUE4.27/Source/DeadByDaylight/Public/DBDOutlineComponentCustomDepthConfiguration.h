#pragma once

#include "CoreMinimal.h"
#include "DBDOutlineComponentConfiguration.h"
#include "DBDOutlineComponentCustomDepthConfiguration.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDOutlineComponentCustomDepthConfiguration : public UDBDOutlineComponentConfiguration
{
	GENERATED_BODY()

public:
	UDBDOutlineComponentCustomDepthConfiguration();
};

FORCEINLINE uint32 GetTypeHash(const UDBDOutlineComponentCustomDepthConfiguration) { return 0; }
