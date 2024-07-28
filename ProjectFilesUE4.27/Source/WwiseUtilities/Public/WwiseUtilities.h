#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "WwiseUtilities.generated.h"

UCLASS()
class WWISEUTILITIES_API UWwiseUtilities : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UWwiseUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UWwiseUtilities) { return 0; }
