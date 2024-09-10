#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/SoftObjectPtr.h"
#include "SceneLightingDescription.h"
#include "LightingData.generated.h"

class ABaseSky;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API ULightingData : public UDataAsset
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<ABaseSky> DefaultLighting;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<ABaseSky> DefaultAtlantaLighting;

	UPROPERTY(EditAnywhere)
	TArray<FSceneLightingDescription> Descriptions;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<AActor> AdaptiveShadowMapControllersActor;

public:
	ULightingData();
};

FORCEINLINE uint32 GetTypeHash(const ULightingData) { return 0; }
