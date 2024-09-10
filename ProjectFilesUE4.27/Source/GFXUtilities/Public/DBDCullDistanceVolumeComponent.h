#pragma once

#include "CoreMinimal.h"
#include "DBDCullDistanceSizePair.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "DBDCullDistanceVolumeComponent.generated.h"

class UBoxComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UDBDCullDistanceVolumeComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDBDCullDistanceSizePair> CullDistances;

	UPROPERTY(EditDefaultsOnly)
	FVector InfluenceBox;

	UPROPERTY(EditDefaultsOnly)
	bool Enabled;

	UPROPERTY(EditDefaultsOnly)
	bool Unbound;

private:
	UPROPERTY(Transient, Export)
	UBoxComponent* _previewInfluenceBox;

public:
	UDBDCullDistanceVolumeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDCullDistanceVolumeComponent) { return 0; }
