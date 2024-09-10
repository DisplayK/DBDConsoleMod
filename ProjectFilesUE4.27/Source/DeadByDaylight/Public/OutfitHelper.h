#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OutfitHelper.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UOutfitHelper : public UObject
{
	GENERATED_BODY()

public:
	UOutfitHelper();
};

FORCEINLINE uint32 GetTypeHash(const UOutfitHelper) { return 0; }
