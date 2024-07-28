#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputSceneComponent.h"
#include "HoudiniInputCameraComponent.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float FOV;

	UPROPERTY()
	float AspectRatio;

	UPROPERTY()
	bool bIsOrthographic;

	UPROPERTY()
	float OrthoWidth;

	UPROPERTY()
	float OrthoNearClipPlane;

	UPROPERTY()
	float OrthoFarClipPlane;

public:
	UHoudiniInputCameraComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputCameraComponent) { return 0; }
