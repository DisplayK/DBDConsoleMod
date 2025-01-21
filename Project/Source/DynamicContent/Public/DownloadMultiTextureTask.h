#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DownloadMultiTextureTask.generated.h"

class UTexture2DDynamic;
class UDownloadingTextureTask;

UCLASS()
class DYNAMICCONTENT_API UDownloadMultiTextureTask : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<UDownloadingTextureTask*> _downloadingTasks;

	UPROPERTY(Transient)
	TMap<FName, UTexture2DDynamic*> _downloadedTextures;

	UPROPERTY(Transient)
	int32 _remainingTasks;

private:
	UFUNCTION()
	void OnTextureDownloadComplete(UDownloadingTextureTask* taskCompleted);

public:
	UDownloadMultiTextureTask();
};

FORCEINLINE uint32 GetTypeHash(const UDownloadMultiTextureTask) { return 0; }
