#pragma once

#include "CoreMinimal.h"
#include "Engine/DebugCameraController.h"
#include "DBDMarketingCameraController.generated.h"

class ACineCameraActor;
class UCineCameraComponent;

UCLASS()
class ADBDMarketingCameraController : public ADebugCameraController
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ACineCameraActor* _cineCamera;

	UPROPERTY(Transient, Export)
	UCineCameraComponent* _cineCameraComponent;

public:
	UFUNCTION(Exec)
	void DBD_SetMarketingCameraTriggerSensitivity(const float triggerSensitivity);

	UFUNCTION(Exec)
	void DBD_SetMarketingCameraDampeningFactor(float accelerationFactor, float decelerationFactor);

	UFUNCTION(Exec)
	void DBD_SetMarketingCameraControllerSensitivityModifier(const float modifierValue, const bool isEditingRight);

	UFUNCTION(Exec)
	void DBD_MarketingCameraToggleDampening();

	UFUNCTION(Exec)
	void DBD_MarketingCamera_SetFocalLineDistance(float focalLineDistance);

	UFUNCTION(Exec)
	void DBD_MarketingCamera_SetFocalLength(float focalLength);

	UFUNCTION(Exec)
	void DBD_MarketingCamera_SetDiaphragmBladeCount(int32 count);

	UFUNCTION(Exec)
	void DBD_MarketingCamera_SetAperture(float fstop);

public:
	ADBDMarketingCameraController();
};

FORCEINLINE uint32 GetTypeHash(const ADBDMarketingCameraController) { return 0; }
