#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "EHoudiniMultiParmModificationType.h"
#include "HoudiniParameterMultiParm.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniParameterMultiParm : public UHoudiniParameter
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool bIsShown;

	UPROPERTY()
	int32 Value;

	UPROPERTY()
	FString TemplateName;

	UPROPERTY()
	int32 MultiparmValue;

	UPROPERTY()
	uint32 MultiParmInstanceNum;

	UPROPERTY()
	uint32 MultiParmInstanceLength;

	UPROPERTY()
	uint32 MultiParmInstanceCount;

	UPROPERTY()
	uint32 InstanceStartOffset;

	UPROPERTY()
	TArray<EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray;

	UPROPERTY()
	int32 DefaultInstanceCount;

public:
	UHoudiniParameterMultiParm();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterMultiParm) { return 0; }
