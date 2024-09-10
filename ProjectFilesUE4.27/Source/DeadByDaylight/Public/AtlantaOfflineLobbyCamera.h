#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaOfflineLobbyCamera.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AAtlantaOfflineLobbyCamera : public ACameraActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ZCameraPositionOffsetMultiplier;

private:
	UPROPERTY(EditDefaultsOnly)
	float _kDefaultAspectRatio;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void SetCameraRotation(FRotator rotationVector);

	UFUNCTION(BlueprintImplementableEvent)
	void SetCameraPosition(FVector positionVector);

public:
	AAtlantaOfflineLobbyCamera();
};

FORCEINLINE uint32 GetTypeHash(const AAtlantaOfflineLobbyCamera) { return 0; }
