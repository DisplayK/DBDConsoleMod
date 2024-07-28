#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayerStateExt.generated.h"

UCLASS()
class GAMEPLAYUTILITIES_API UPlayerStateExt : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UPlayerStateExt();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerStateExt) { return 0; }
