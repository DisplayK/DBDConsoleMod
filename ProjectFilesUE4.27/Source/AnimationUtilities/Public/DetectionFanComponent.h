#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DetectionFanComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class ANIMATIONUTILITIES_API UDetectionFanComponent : public USceneComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FFloatRange _angleRange;

	UPROPERTY(EditDefaultsOnly)
	FVector _originWorldOffset;

	UPROPERTY(EditDefaultsOnly)
	int32 _numberOfSpots;

	UPROPERTY(EditDefaultsOnly)
	float _defaultRingRadius;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<ECollisionChannel> _collisionChannel;

	UPROPERTY(meta=(BindWidgetOptional))
	USkeletalMeshComponent* _meshComponent;

public:
	UDetectionFanComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDetectionFanComponent) { return 0; }
