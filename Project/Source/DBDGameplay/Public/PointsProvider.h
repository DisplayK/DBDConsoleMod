#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PointsProvider.generated.h"

UCLASS(Abstract, EditInlineNew)
class DBDGAMEPLAY_API UPointsProvider : public UObject
{
	GENERATED_BODY()

public:
	UPointsProvider();
};

FORCEINLINE uint32 GetTypeHash(const UPointsProvider) { return 0; }
