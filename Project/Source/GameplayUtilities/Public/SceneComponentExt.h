#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SceneComponentExt.generated.h"

UCLASS()
class GAMEPLAYUTILITIES_API USceneComponentExt : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	USceneComponentExt();
};

FORCEINLINE uint32 GetTypeHash(const USceneComponentExt) { return 0; }
