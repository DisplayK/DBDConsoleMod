#pragma once

#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavArea_Slasher.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UNavArea_Slasher : public UNavArea
{
	GENERATED_BODY()

public:
	UNavArea_Slasher();
};

FORCEINLINE uint32 GetTypeHash(const UNavArea_Slasher) { return 0; }
