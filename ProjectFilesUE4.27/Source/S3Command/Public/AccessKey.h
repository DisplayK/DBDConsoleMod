#pragma once

#include "CoreMinimal.h"
#include "AccessKey.generated.h"

USTRUCT()
struct FAccessKey
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString KeyId;

	UPROPERTY()
	FString Key;

public:
	S3COMMAND_API FAccessKey();
};

FORCEINLINE uint32 GetTypeHash(const FAccessKey) { return 0; }
