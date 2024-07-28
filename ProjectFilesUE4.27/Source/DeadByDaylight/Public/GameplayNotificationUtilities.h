#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayNotificationUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UGameplayNotificationUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UGameplayNotificationUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UGameplayNotificationUtilities) { return 0; }
