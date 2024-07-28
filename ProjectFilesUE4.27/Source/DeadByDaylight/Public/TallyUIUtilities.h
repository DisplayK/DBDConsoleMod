#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TallyUIUtilities.generated.h"

UCLASS()
class UTallyUIUtilities : public UObject
{
	GENERATED_BODY()

public:
	UTallyUIUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UTallyUIUtilities) { return 0; }
