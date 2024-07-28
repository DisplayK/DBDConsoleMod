#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArchivePresenterHelper.generated.h"

UCLASS()
class DBDUIPRESENTERS_API UArchivePresenterHelper : public UObject
{
	GENERATED_BODY()

public:
	UArchivePresenterHelper();
};

FORCEINLINE uint32 GetTypeHash(const UArchivePresenterHelper) { return 0; }
