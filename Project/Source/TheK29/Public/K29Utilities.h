#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "K29Utilities.generated.h"

class AActor;
class AK29Power;
class UObject;
class ASlasherPlayer;

UCLASS(BlueprintType)
class UK29Utilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool IsSurvivorAbleToBeAffectedByPower(const AActor* survivorAsActor, const ASlasherPlayer* killer);

	UFUNCTION(BlueprintPure)
	static AK29Power* GetK29Power(const UObject* worldContextObject);

public:
	UK29Utilities();
};

FORCEINLINE uint32 GetTypeHash(const UK29Utilities) { return 0; }
