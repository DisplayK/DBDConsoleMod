#pragma once

#include "CoreMinimal.h"
#include "DedicatedServerStartupInitializerInterface.h"
#include "StartupInitializer.h"
#include "DedicatedServerStartupInitializer.generated.h"

class UDBDTimeUtilities;

UCLASS()
class STARTUPINITIALIZER_API UDedicatedServerStartupInitializer : public UStartupInitializer, public IDedicatedServerStartupInitializerInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UDBDTimeUtilities* _dbdTimeUtilities;

public:
	UDedicatedServerStartupInitializer();
};

FORCEINLINE uint32 GetTypeHash(const UDedicatedServerStartupInitializer) { return 0; }
