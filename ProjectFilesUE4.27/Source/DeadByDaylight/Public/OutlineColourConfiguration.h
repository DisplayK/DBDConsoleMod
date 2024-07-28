#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OutlineColourConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FOutlineColourConfiguration
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FLinearColor ColourValue;

public:
	DEADBYDAYLIGHT_API FOutlineColourConfiguration();
};

FORCEINLINE uint32 GetTypeHash(const FOutlineColourConfiguration) { return 0; }
