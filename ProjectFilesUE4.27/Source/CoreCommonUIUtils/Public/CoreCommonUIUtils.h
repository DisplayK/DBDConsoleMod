#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoreCommonUIUtils.generated.h"

class UObject;

UCLASS(BlueprintType)
class CORECOMMONUIUTILS_API UCoreCommonUIUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	static bool HasOuter(const UObject* object, UObject* root);

	UFUNCTION(BlueprintPure)
	static float GetDPIScale();

	UFUNCTION(BlueprintPure)
	static FText GetBeautifiedNumericText(const int32 value);

	UFUNCTION(BlueprintPure)
	static FString GetBeautifiedNumericString(const int32 value);

	UFUNCTION(BlueprintPure)
	static FString BeautifyName(const FString& name, int32 maxCharacters);

public:
	UCoreCommonUIUtils();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCommonUIUtils) { return 0; }
