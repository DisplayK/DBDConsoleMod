#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterInt.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterInt : public UHoudiniParameter
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	TArray<int32> Values;

	UPROPERTY()
	TArray<int32> DefaultValues;

	UPROPERTY()
	FString Unit;

	UPROPERTY()
	bool bHasMin;

	UPROPERTY()
	bool bHasMax;

	UPROPERTY()
	bool bHasUIMin;

	UPROPERTY()
	bool bHasUIMax;

	UPROPERTY()
	bool bIsLogarithmic;

	UPROPERTY()
	int32 Min;

	UPROPERTY()
	int32 Max;

	UPROPERTY()
	int32 UIMin;

	UPROPERTY()
	int32 UIMax;

public:
	UHoudiniParameterInt();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterInt) { return 0; }
