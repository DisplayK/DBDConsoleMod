#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K26PathPart.generated.h"

class USceneComponent;
class UK26PowerOutlineUpdateStrategy;
class UStaticMeshComponent;
class UDBDOutlineComponent;
class UNiagaraComponent;

UCLASS()
class AK26PathPart : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	UStaticMeshComponent* _mesh;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	UNiagaraComponent* _visualEffectKiller;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	UNiagaraComponent* _visualEffectSurvivor;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	UK26PowerOutlineUpdateStrategy* _outlineUpdateStrategy;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	USceneComponent* _rootComponent;

	UPROPERTY(Transient)
	bool _isVisibleForSurvivor;

	UPROPERTY(Transient)
	bool _isVisibleForKiller;

public:
	AK26PathPart();
};

FORCEINLINE uint32 GetTypeHash(const AK26PathPart) { return 0; }
