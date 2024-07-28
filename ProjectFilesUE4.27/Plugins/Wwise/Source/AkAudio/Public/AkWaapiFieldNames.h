#pragma once

#include "CoreMinimal.h"
#include "AkWaapiFieldNames.generated.h"

USTRUCT(BlueprintType)
struct FAkWaapiFieldNames
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString FieldName;

public:
	AKAUDIO_API FAkWaapiFieldNames();
};

FORCEINLINE uint32 GetTypeHash(const FAkWaapiFieldNames) { return 0; }
