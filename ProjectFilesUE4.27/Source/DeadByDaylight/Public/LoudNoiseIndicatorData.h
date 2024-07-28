#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LoudNoiseIndicatorData.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FLoudNoiseIndicatorData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UStaticMeshComponent* MeshMask;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UStaticMeshComponent* DistortionMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RemainingTime;

public:
	DEADBYDAYLIGHT_API FLoudNoiseIndicatorData();
};

FORCEINLINE uint32 GetTypeHash(const FLoudNoiseIndicatorData) { return 0; }
