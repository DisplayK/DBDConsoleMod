#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CameraUtilities.generated.h"

UCLASS()
class GAMEPLAYUTILITIES_API UCameraUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UCameraUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UCameraUtilities) { return 0; }
