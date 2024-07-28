#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BloodOrbUtilities.generated.h"

class UObject;
class ABloodOrb;

UCLASS(BlueprintType)
class THEONI_API UBloodOrbUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static TArray<ABloodOrb*> GetAllBloodOrbs(const UObject* worldContextObject);

public:
	UBloodOrbUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UBloodOrbUtilities) { return 0; }
