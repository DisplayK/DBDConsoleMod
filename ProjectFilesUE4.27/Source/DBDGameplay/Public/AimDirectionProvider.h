#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AimDirectionProvider.generated.h"

UCLASS(Abstract, EditInlineNew)
class DBDGAMEPLAY_API UAimDirectionProvider : public UObject
{
	GENERATED_BODY()

public:
	UAimDirectionProvider();
};

FORCEINLINE uint32 GetTypeHash(const UAimDirectionProvider) { return 0; }
