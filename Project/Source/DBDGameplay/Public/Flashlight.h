#pragma once

#include "CoreMinimal.h"
#include "BaseCamperCollectable.h"
#include "GameplayTagContainer.h"
#include "Flashlight.generated.h"

class USpotLightComponent;

UCLASS()
class AFlashlight : public ABaseCamperCollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _allowedInteractionSemanticsDuringUse;

	UPROPERTY(Transient)
	bool _shouldUseCooldowns;

	UPROPERTY(Transient)
	float _cooldownWhileOnDuration;

	UPROPERTY(Transient)
	float _cooldownWhileOffDuration;

public:
	UFUNCTION(BlueprintPure)
	USpotLightComponent* GetSpotlightComponent() const;

public:
	AFlashlight();
};

FORCEINLINE uint32 GetTypeHash(const AFlashlight) { return 0; }
