#pragma once

#include "CoreMinimal.h"
#include "CharacterStateData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStateData
{
	GENERATED_BODY()

private:
	UPROPERTY()
	int32 _pips;

	UPROPERTY()
	FName _powerId;

	UPROPERTY()
	TArray<FName> _addonIds;

public:
	DEADBYDAYLIGHT_API FCharacterStateData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterStateData) { return 0; }
