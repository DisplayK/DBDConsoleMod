#pragma once

#include "CoreMinimal.h"
#include "TaskContainer.generated.h"

class UDownloadMultiTextureTask;

USTRUCT()
struct FTaskContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	UDownloadMultiTextureTask* DownloadTask;

public:
	DYNAMICCONTENT_API FTaskContainer();
};

FORCEINLINE uint32 GetTypeHash(const FTaskContainer) { return 0; }
