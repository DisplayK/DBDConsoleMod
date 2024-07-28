#pragma once

#include "CoreMinimal.h"
#include "CharmIdSlot.generated.h"

USTRUCT(BlueprintType)
struct FCharmIdSlot
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, SaveGame)
	int8 SlotIndex;

	UPROPERTY(EditAnywhere, SaveGame)
	FName CharmId;

public:
	CUSTOMIZATION_API FCharmIdSlot();
};

FORCEINLINE uint32 GetTypeHash(const FCharmIdSlot) { return 0; }
