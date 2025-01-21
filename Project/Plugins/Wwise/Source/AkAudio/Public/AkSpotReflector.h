#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkSpotReflector.generated.h"

class UAkAuxBus;
class UAkAcousticTexture;

UCLASS()
class AKAUDIO_API AAkSpotReflector : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAuxBus* EarlyReflectionAuxBus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EarlyReflectionAuxBusName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAcousticTexture* AcousticTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DistanceScalingFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Level;

public:
	AAkSpotReflector();
};

FORCEINLINE uint32 GetTypeHash(const AAkSpotReflector) { return 0; }
