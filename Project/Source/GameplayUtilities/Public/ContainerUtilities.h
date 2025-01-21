#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ContainerUtilities.generated.h"

UCLASS()
class GAMEPLAYUTILITIES_API UContainerUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UContainerUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UContainerUtilities) { return 0; }
