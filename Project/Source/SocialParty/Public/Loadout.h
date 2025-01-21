#pragma once

#include "CoreMinimal.h"
#include "Loadout.generated.h"

USTRUCT(BlueprintType)
struct FLoadout
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName offering;

	UPROPERTY()
	FName item;

	UPROPERTY()
	FName addon1;

	UPROPERTY()
	FName addon2;

private:
	UPROPERTY()
	TArray<FName> _perks;

public:
	SOCIALPARTY_API FLoadout();
};

FORCEINLINE uint32 GetTypeHash(const FLoadout) { return 0; }
