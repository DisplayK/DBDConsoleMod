#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArchiveVignettesContainer.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UArchiveVignettesContainer : public UObject
{
	GENERATED_BODY()

public:
	UArchiveVignettesContainer();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveVignettesContainer) { return 0; }
