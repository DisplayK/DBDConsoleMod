#pragma once

#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavArea_Breakable.generated.h"

UCLASS()
class DBDBOTS_API UNavArea_Breakable : public UNavArea
{
	GENERATED_BODY()

public:
	UNavArea_Breakable();
};

FORCEINLINE uint32 GetTypeHash(const UNavArea_Breakable) { return 0; }
