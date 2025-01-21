#pragma once

#include "CoreMinimal.h"
#include "AkWaapiUri.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AkWaapiUriConv.generated.h"

UCLASS(BlueprintType)
class AKAUDIO_API UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static FText Conv_FAkWaapiUriToText(const FAkWaapiUri& INAkWaapiUri);

	UFUNCTION(BlueprintPure)
	static FString Conv_FAkWaapiUriToString(const FAkWaapiUri& INAkWaapiUri);

public:
	UAkWaapiUriConv();
};

FORCEINLINE uint32 GetTypeHash(const UAkWaapiUriConv) { return 0; }
