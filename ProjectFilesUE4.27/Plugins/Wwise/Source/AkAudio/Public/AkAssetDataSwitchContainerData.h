#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "AkAssetDataSwitchContainerData.generated.h"

class UAkMediaAsset;
class UAkGroupValue;
class UAkAssetDataSwitchContainerData;

UCLASS(EditInlineNew)
class AKAUDIO_API UAkAssetDataSwitchContainerData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	TSoftObjectPtr<UAkGroupValue> GroupValue;

	UPROPERTY(VisibleAnywhere)
	UAkGroupValue* DefaultGroupValue;

	UPROPERTY(VisibleAnywhere)
	TArray<UAkMediaAsset*> MediaList;

	UPROPERTY(VisibleAnywhere)
	TArray<UAkAssetDataSwitchContainerData*> Children;

public:
	UAkAssetDataSwitchContainerData();
};

FORCEINLINE uint32 GetTypeHash(const UAkAssetDataSwitchContainerData) { return 0; }
