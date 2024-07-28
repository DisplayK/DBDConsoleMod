#pragma once

#include "CoreMinimal.h"
#include "StartupInitializerInterface.h"
#include "UObject/NoExportTypes.h"
#include "StartupInitializer.generated.h"

UCLASS()
class STARTUPINITIALIZER_API UStartupInitializer : public UObject, public IStartupInitializerInterface
{
	GENERATED_BODY()

public:
	UStartupInitializer();
};

FORCEINLINE uint32 GetTypeHash(const UStartupInitializer) { return 0; }
