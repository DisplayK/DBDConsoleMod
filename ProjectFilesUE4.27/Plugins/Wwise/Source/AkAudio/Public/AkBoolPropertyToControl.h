#pragma once

#include "CoreMinimal.h"
#include "AkBoolPropertyToControl.generated.h"

USTRUCT(BlueprintType)
struct FAkBoolPropertyToControl
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString ItemProperty;

public:
	AKAUDIO_API FAkBoolPropertyToControl();
};

FORCEINLINE uint32 GetTypeHash(const FAkBoolPropertyToControl) { return 0; }
