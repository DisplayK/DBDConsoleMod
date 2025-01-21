#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArchivesSpecialBehavioursHelper.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UArchivesSpecialBehavioursHelper : public UObject
{
	GENERATED_BODY()

public:
	UArchivesSpecialBehavioursHelper();
};

FORCEINLINE uint32 GetTypeHash(const UArchivesSpecialBehavioursHelper) { return 0; }
