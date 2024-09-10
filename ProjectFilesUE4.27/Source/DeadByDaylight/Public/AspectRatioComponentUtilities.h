#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AspectRatioComponentUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UAspectRatioComponentUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UAspectRatioComponentUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UAspectRatioComponentUtilities) { return 0; }
