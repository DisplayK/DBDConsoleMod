#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECameraFadeState.h"
#include "CameraFadeComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UCameraFadeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void OnFadedOut();

	UFUNCTION(BlueprintCallable)
	void OnFadedIn();

	UFUNCTION(BlueprintPure)
	ECameraFadeState GetCameraFadeState() const;

public:
	UCameraFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCameraFadeComponent) { return 0; }
