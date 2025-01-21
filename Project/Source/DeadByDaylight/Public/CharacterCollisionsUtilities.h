#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CharacterCollisionsUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UCharacterCollisionsUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UCharacterCollisionsUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterCollisionsUtilities) { return 0; }
