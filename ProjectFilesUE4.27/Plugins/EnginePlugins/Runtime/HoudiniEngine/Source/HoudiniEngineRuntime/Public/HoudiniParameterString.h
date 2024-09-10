#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterString.generated.h"

class UObject;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterString : public UHoudiniParameter
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	TArray<FString> Values;

	UPROPERTY()
	TArray<FString> DefaultValues;

	UPROPERTY()
	TArray<UObject*> ChosenAssets;

	UPROPERTY()
	bool bIsAssetRef;

public:
	UHoudiniParameterString();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterString) { return 0; }
