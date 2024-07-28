#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AccessoryUtilities.generated.h"

class UBoneSocketLocalVelocityEvaluator;
class UAccessory;

UCLASS(BlueprintType)
class CUSTOMIZATION_API UAccessoryUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static UBoneSocketLocalVelocityEvaluator* AddBoneSocketLocalVelocityEvaluatorToAccessory(UAccessory* accessory, const TArray<FName>& trackedBoneSocketNames);

public:
	UAccessoryUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UAccessoryUtilities) { return 0; }
