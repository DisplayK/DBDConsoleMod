#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArchivesHelper.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UArchivesHelper : public UObject
{
	GENERATED_BODY()

public:
	UArchivesHelper();
};

FORCEINLINE uint32 GetTypeHash(const UArchivesHelper) { return 0; }
