#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "FlashlightConeComponent.generated.h"

class USceneComponent;
class AActor;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightConeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FVector AIAimBeamLocationOffset;

	UPROPERTY(EditDefaultsOnly)
	FRotator AIAimBeamRotationOffset;

protected:
	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _flashlightBottom;

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _baseBeamAngle;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _baseBeamLength;

	UPROPERTY(Transient)
	TWeakObjectPtr<AActor> _cacheCollidingActor;

public:
	UFUNCTION(BlueprintPure)
	float GetOcclusionDistance() const;

	UFUNCTION(BlueprintPure)
	float GetEffectiveConeLength() const;

	UFUNCTION(BlueprintPure)
	float GetEffectiveConeHalfAngle() const;

public:
	UFlashlightConeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFlashlightConeComponent) { return 0; }
