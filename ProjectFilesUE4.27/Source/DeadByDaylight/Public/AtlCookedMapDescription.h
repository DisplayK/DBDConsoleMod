#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "AtlCookedMapDescription.generated.h"

class UWorld;

USTRUCT()
struct FAtlCookedMapDescription
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName ThemeName;

	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<UWorld> MapAsset;

public:
	DEADBYDAYLIGHT_API FAtlCookedMapDescription();
};

FORCEINLINE uint32 GetTypeHash(const FAtlCookedMapDescription) { return 0; }
