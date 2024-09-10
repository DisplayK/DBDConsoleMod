#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterChoice.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterChoice : public UHoudiniParameter
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	int32 IntValue;

	UPROPERTY()
	int32 DefaultIntValue;

	UPROPERTY()
	FString StringValue;

	UPROPERTY()
	FString DefaultStringValue;

	UPROPERTY()
	TArray<FString> StringChoiceValues;

	UPROPERTY()
	TArray<FString> StringChoiceLabels;

	UPROPERTY()
	bool bIsChildOfRamp;

	UPROPERTY()
	TArray<int32> IntValuesArray;

public:
	UHoudiniParameterChoice();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterChoice) { return 0; }
