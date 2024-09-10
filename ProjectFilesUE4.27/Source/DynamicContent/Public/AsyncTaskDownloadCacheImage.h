#pragma once

#include "CoreMinimal.h"
#include "Blueprint/AsyncTaskDownloadImage.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTaskDownloadCacheImage.generated.h"

UCLASS()
class DYNAMICCONTENT_API UAsyncTaskDownloadCacheImage : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FDownloadImageDelegate OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FDownloadImageDelegate OnFail;

private:
	UPROPERTY(Transient)
	FString _url;

public:
	UAsyncTaskDownloadCacheImage();
};

FORCEINLINE uint32 GetTypeHash(const UAsyncTaskDownloadCacheImage) { return 0; }
