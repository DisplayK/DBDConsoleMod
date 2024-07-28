#pragma once

#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavArea_Blink.generated.h"

UCLASS()
class DBDBOTS_API UNavArea_Blink : public UNavArea
{
	GENERATED_BODY()

public:
	UNavArea_Blink();
};

FORCEINLINE uint32 GetTypeHash(const UNavArea_Blink) { return 0; }
