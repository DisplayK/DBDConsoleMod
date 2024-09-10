#pragma once

#include "CoreMinimal.h"
#include "StartupInitializer.h"
#include "ClientStartupInitializerInterface.h"
#include "UObject/NoExportTypes.h"
#include "ClientStartupInitializer.generated.h"

UCLASS()
class STARTUPINITIALIZER_API UClientStartupInitializer : public UStartupInitializer, public IClientStartupInitializerInterface
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnHealthCheckTriggered(bool requestSuccess, int32 providerError, bool datetimeIsSet, const FDateTime& utcTime);

public:
	UClientStartupInitializer();
};

FORCEINLINE uint32 GetTypeHash(const UClientStartupInitializer) { return 0; }
