#pragma once

#include "CoreMinimal.h"
#include "AkWaapiFieldNames.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SAkWaapiFieldNamesConv.generated.h"

UCLASS(BlueprintType)
class AKAUDIO_API USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static FText Conv_FAkWaapiFieldNamesToText(const FAkWaapiFieldNames& INAkWaapiFieldNames);

	UFUNCTION(BlueprintPure)
	static FString Conv_FAkWaapiFieldNamesToString(const FAkWaapiFieldNames& INAkWaapiFieldNames);

public:
	USAkWaapiFieldNamesConv();
};

FORCEINLINE uint32 GetTypeHash(const USAkWaapiFieldNamesConv) { return 0; }
