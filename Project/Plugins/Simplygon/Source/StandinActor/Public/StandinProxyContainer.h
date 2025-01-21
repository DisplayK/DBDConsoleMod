#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StandinProxyEntry.h"
#include "StandinProxyContainer.generated.h"

UCLASS()
class STANDINACTOR_API UStandinProxyContainer : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere)
	TArray<FStandinProxyEntry> Standins;

public:
	UStandinProxyContainer();
};

FORCEINLINE uint32 GetTypeHash(const UStandinProxyContainer) { return 0; }
