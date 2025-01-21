#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TheGhostUtilities.generated.h"

class AActor;

UCLASS(BlueprintType)
class THEGHOSTFACE_API UTheGhostUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool IsKillerStealth(AActor* killer);

public:
	UTheGhostUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UTheGhostUtilities) { return 0; }
