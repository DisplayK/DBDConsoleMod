#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FlashlightableComponent.generated.h"

class UFlashlightableLightingStrategy;
class UFlashlightComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFlashlightLitChangedEvent, bool, isLit);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFlashlightAddedRemovedEvent, const UFlashlightComponent*, flashlight);

public:
	UPROPERTY(BlueprintAssignable)
	FOnFlashlightAddedRemovedEvent OnFlashlightAddedEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFlashlightAddedRemovedEvent OnFlashlightRemovedEvent;

	UPROPERTY(BlueprintAssignable)
	FOnFlashlightLitChangedEvent OnFlashlightLitChangedEvent;

private:
	UPROPERTY(EditAnywhere, Export)
	UFlashlightableLightingStrategy* _lightingStrategy;

	UPROPERTY(Transient, Export)
	TSet<UFlashlightComponent*> _flashlights;

public:
	UFUNCTION(BlueprintPure)
	bool IsLit() const;

public:
	UFlashlightableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFlashlightableComponent) { return 0; }
