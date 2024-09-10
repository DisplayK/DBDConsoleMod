#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "UObject/ScriptInterface.h"
#include "DBDPlayerCameraManager.generated.h"

class IViewRotationStrategy;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDPlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NormalFOV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetingFOV;

private:
	UPROPERTY(Transient)
	TScriptInterface<IViewRotationStrategy> _viewRotationStrategy;

public:
	UFUNCTION(BlueprintImplementableEvent)
	void StartFadeOutTimeline(float duration);

	UFUNCTION(BlueprintImplementableEvent)
	void StartFadeInTimeline(float duration);

public:
	ADBDPlayerCameraManager();
};

FORCEINLINE uint32 GetTypeHash(const ADBDPlayerCameraManager) { return 0; }
