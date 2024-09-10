#pragma once

#include "CoreMinimal.h"
#include "PerkLevelText.generated.h"

USTRUCT(BlueprintType)
struct FPerkLevelText
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Tunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText TextOverride;

public:
	DEADBYDAYLIGHT_API FPerkLevelText();
};

FORCEINLINE uint32 GetTypeHash(const FPerkLevelText) { return 0; }
