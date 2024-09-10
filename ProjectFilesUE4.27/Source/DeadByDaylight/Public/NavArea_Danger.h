#pragma once

#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavArea_Danger.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UNavArea_Danger : public UNavArea
{
	GENERATED_BODY()

public:
	UNavArea_Danger();
};

FORCEINLINE uint32 GetTypeHash(const UNavArea_Danger) { return 0; }
