#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDConsoleCommandUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDConsoleCommandUtilities : public UObject
{
	GENERATED_BODY()

public:
	UDBDConsoleCommandUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDConsoleCommandUtilities) { return 0; }
