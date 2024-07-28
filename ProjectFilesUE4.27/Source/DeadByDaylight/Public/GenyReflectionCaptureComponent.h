#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ReflectionCaptureTwoStates.h"
#include "GenyReflectionCaptureComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGenyReflectionCaptureComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FReflectionCaptureTwoStates> generatorDrivenReflectionCapture;

public:
	UGenyReflectionCaptureComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGenyReflectionCaptureComponent) { return 0; }
