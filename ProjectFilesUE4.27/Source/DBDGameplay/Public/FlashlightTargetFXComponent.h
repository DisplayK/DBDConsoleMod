#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FlashlightTargetFXComponent.generated.h"

class UFlashlightableComponent;

UCLASS(BlueprintType, Abstract, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightTargetFXComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere)
	bool _modifiesBeamAngle;

private:
	UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UFlashlightableComponent* _flashlightable;

private:
	UFUNCTION()
	void OnIsLitChanged(bool isLit);

public:
	UFlashlightTargetFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFlashlightTargetFXComponent) { return 0; }
