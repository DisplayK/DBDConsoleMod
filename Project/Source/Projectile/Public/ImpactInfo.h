#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ImpactInfo.generated.h"

class UPrimitiveComponent;
class AActor;

USTRUCT(BlueprintType)
struct FImpactInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UPrimitiveComponent* Component;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EPhysicalSurface> SurfaceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ImpactNormal;

public:
	PROJECTILE_API FImpactInfo();
};

FORCEINLINE uint32 GetTypeHash(const FImpactInfo) { return 0; }
