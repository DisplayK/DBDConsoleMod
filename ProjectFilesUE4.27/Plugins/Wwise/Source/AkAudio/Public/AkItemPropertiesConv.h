#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AkPropertyToControl.h"
#include "AkItemPropertiesConv.generated.h"

UCLASS(BlueprintType)
class AKAUDIO_API UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static FText Conv_FAkPropertyToControlToText(const FAkPropertyToControl& INAkPropertyToControl);

	UFUNCTION(BlueprintPure)
	static FString Conv_FAkPropertyToControlToString(const FAkPropertyToControl& INAkPropertyToControl);

public:
	UAkItemPropertiesConv();
};

FORCEINLINE uint32 GetTypeHash(const UAkItemPropertiesConv) { return 0; }
