#pragma once

#include "CoreMinimal.h"
#include "EAttribStorageType.h"
#include "EAttribOwner.h"
#include "HoudiniGenericAttribute.generated.h"

USTRUCT()
struct FHoudiniGenericAttribute
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString AttributeName;

	UPROPERTY()
	EAttribStorageType AttributeType;

	UPROPERTY()
	EAttribOwner AttributeOwner;

	UPROPERTY()
	int32 AttributeCount;

	UPROPERTY()
	int32 AttributeTupleSize;

	UPROPERTY()
	TArray<double> DoubleValues;

	UPROPERTY()
	TArray<int64> IntValues;

	UPROPERTY()
	TArray<FString> StringValues;

public:
	HOUDINIENGINERUNTIME_API FHoudiniGenericAttribute();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniGenericAttribute) { return 0; }
