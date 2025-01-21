#pragma once

#include "CoreMinimal.h"
#include "EmblemTunableItem.generated.h"

USTRUCT()
struct FEmblemTunableItem
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	double Value;

public:
	S3COMMAND_API FEmblemTunableItem();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemTunableItem) { return 0; }
