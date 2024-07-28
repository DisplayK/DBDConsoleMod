#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DreamworldOnlyComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDreamworldOnlyComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UDreamworldOnlyComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDreamworldOnlyComponent) { return 0; }
