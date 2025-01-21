#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AkAcousticTextureSetComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkAcousticTextureSetComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UAkAcousticTextureSetComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAkAcousticTextureSetComponent) { return 0; }
