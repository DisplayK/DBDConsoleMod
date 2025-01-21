#pragma once

#include "CoreMinimal.h"
#include "AkAssetDataWithMedia.h"
#include "AkPluginInfo.h"
#include "AkInitBankAssetData.generated.h"

UCLASS()
class AKAUDIO_API UAkInitBankAssetData : public UAkAssetDataWithMedia
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere)
	TArray<FAkPluginInfo> PluginInfos;

public:
	UAkInitBankAssetData();
};

FORCEINLINE uint32 GetTypeHash(const UAkInitBankAssetData) { return 0; }
