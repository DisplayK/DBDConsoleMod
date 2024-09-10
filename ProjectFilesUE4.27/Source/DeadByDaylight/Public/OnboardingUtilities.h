#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnboardingUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UOnboardingUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UOnboardingUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UOnboardingUtilities) { return 0; }
