#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TunableStat.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "ShockTherapyAOE.generated.h"

class USceneComponent;
class AShockTherapyAOEPreview;
class UStaticMeshComponent;

UCLASS()
class AShockTherapyAOE : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UStaticMeshComponent* _attackZone;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	USceneComponent* _rootComponent;

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _shockTherapyRange;

	UPROPERTY(EditDefaultsOnly)
	float _killerOffset;

	UPROPERTY(EditDefaultsOnly)
	float _baseZoneSize;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AShockTherapyAOEPreview> _shockTherapyPreviewClass;

	UPROPERTY(Transient)
	AShockTherapyAOEPreview* _shockTherapyPreview;

	UPROPERTY(EditDefaultsOnly)
	FTransform _previewTransform;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnScaleInitialized();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivateShockTherapyAOE();

public:
	AShockTherapyAOE();
};

FORCEINLINE uint32 GetTypeHash(const AShockTherapyAOE) { return 0; }
