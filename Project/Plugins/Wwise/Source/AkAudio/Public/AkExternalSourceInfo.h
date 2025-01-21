#pragma once

#include "CoreMinimal.h"
#include "AkCodecId.h"
#include "AkExternalSourceInfo.generated.h"

class UAkExternalMediaAsset;

USTRUCT(BlueprintType)
struct FAkExternalSourceInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ExternalSrcName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AkCodecId CodecID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FileName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkExternalMediaAsset* ExternalSourceAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsStreamed;

public:
	AKAUDIO_API FAkExternalSourceInfo();
};

FORCEINLINE uint32 GetTypeHash(const FAkExternalSourceInfo) { return 0; }
