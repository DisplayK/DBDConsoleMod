#pragma once

#include "CoreMinimal.h"
#include "DBDReflectionCaptureSpawnerComponent.h"
#include "UObject/NoExportTypes.h"
#include "DBDBoxReflectionCaptureSpawnerComponent.generated.h"

class UBoxComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UDBDBoxReflectionCaptureSpawnerComponent : public UDBDReflectionCaptureSpawnerComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FVector InfluenceBox;

	UPROPERTY(EditDefaultsOnly)
	float BoxTransitionDistance;

	UPROPERTY(Transient, Export)
	UBoxComponent* PreviewInfluenceBox;

	UPROPERTY(Transient, Export)
	UBoxComponent* PreviewCaptureBox;

public:
	UDBDBoxReflectionCaptureSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDBoxReflectionCaptureSpawnerComponent) { return 0; }
