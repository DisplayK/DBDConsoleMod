#pragma once

#include "CoreMinimal.h"
#include "AkPropertyToControl.generated.h"

USTRUCT(BlueprintType)
struct FAkPropertyToControl
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FString ItemProperty;

public:
	AKAUDIO_API FAkPropertyToControl();
};

FORCEINLINE uint32 GetTypeHash(const FAkPropertyToControl) { return 0; }
