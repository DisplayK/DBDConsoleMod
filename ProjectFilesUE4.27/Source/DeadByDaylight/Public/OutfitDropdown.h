#pragma once

#include "CoreMinimal.h"
#include "CharacterDropdown.h"
#include "OutfitDropdown.generated.h"

USTRUCT()
struct FOutfitDropdown: public FCharacterDropdown
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName OutfitId;

public:
	DEADBYDAYLIGHT_API FOutfitDropdown();
};

FORCEINLINE uint32 GetTypeHash(const FOutfitDropdown) { return 0; }
