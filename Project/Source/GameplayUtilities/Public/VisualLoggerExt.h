#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VisualLoggerExt.generated.h"

UCLASS()
class GAMEPLAYUTILITIES_API UVisualLoggerExt : public UObject
{
	GENERATED_BODY()

public:
	UVisualLoggerExt();
};

FORCEINLINE uint32 GetTypeHash(const UVisualLoggerExt) { return 0; }
