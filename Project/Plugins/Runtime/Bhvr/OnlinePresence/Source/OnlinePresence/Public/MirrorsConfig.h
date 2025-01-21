#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MirrorsConfig.generated.h"

UCLASS()
class ONLINEPRESENCE_API UMirrorsConfig : public UObject
{
	GENERATED_BODY()

public:
	UMirrorsConfig();
};

FORCEINLINE uint32 GetTypeHash(const UMirrorsConfig) { return 0; }
