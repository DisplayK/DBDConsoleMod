#pragma once

#include "CoreMinimal.h"
#include "SimpleCharacterDropdown.generated.h"

USTRUCT(BlueprintType)
struct FSimpleCharacterDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 CharacterID;

public:
	DEADBYDAYLIGHT_API FSimpleCharacterDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FSimpleCharacterDropdown) { return 0; }
