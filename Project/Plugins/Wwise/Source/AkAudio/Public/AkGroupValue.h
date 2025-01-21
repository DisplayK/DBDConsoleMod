#pragma once

#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "UObject/SoftObjectPtr.h"
#include "AkGroupValue.generated.h"

class UAkMediaAsset;

UCLASS()
class AKAUDIO_API UAkGroupValue : public UAkAudioType
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	TArray<TSoftObjectPtr<UAkMediaAsset>> MediaDependencies;

	UPROPERTY(VisibleAnywhere, AssetRegistrySearchable)
	uint32 GroupShortID;

public:
	UAkGroupValue();
};

FORCEINLINE uint32 GetTypeHash(const UAkGroupValue) { return 0; }
