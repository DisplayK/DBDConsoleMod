#pragma once

#include "CoreMinimal.h"
#include "CombinedSpecialEventData.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "CombinedSpecialEventDataUtilities.generated.h"

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API UCombinedSpecialEventDataUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static FName GetSpecialMusicState(const FCombinedSpecialEventData& data);

	UFUNCTION(BlueprintPure)
	static FColor GetObjectOutlineColour(const FCombinedSpecialEventData& data);

public:
	UCombinedSpecialEventDataUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UCombinedSpecialEventDataUtilities) { return 0; }
