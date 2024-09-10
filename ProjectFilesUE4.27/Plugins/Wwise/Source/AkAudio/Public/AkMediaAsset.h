#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkMediaAsset.generated.h"

class UAkMediaAssetData;

UCLASS()
class AKAUDIO_API UAkMediaAsset : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	uint32 Id;

	UPROPERTY(EditAnywhere)
	bool AutoLoad;

	UPROPERTY(EditAnywhere)
	TArray<UObject*> UserData;

private:
	UPROPERTY(Transient)
	UAkMediaAssetData* CurrentMediaAssetData;

public:
	UAkMediaAsset();
};

FORCEINLINE uint32 GetTypeHash(const UAkMediaAsset) { return 0; }
