#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TREmitterFunctionLibrary.generated.h"

class UObject;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UTREmitterFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintPure)
	static int32 GetActiveFakeTerrorRadiusEmittersCount(const UObject* WorldContextObject);

public:
	UTREmitterFunctionLibrary();
};

FORCEINLINE uint32 GetTypeHash(const UTREmitterFunctionLibrary) { return 0; }
