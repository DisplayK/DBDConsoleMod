#pragma once

#include "CoreMinimal.h"
#include "HoudiniCurveOutputProperties.h"
#include "HoudiniOutputObject.generated.h"

class UObject;

USTRUCT()
struct FHoudiniOutputObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UObject* OutputObject;

	UPROPERTY()
	UObject* OutputComponent;

	UPROPERTY()
	UObject* ProxyObject;

	UPROPERTY()
	UObject* ProxyComponent;

	UPROPERTY()
	bool bProxyIsCurrent;

	UPROPERTY()
	bool bIsImplicit;

	UPROPERTY()
	FString BakeName;

	UPROPERTY()
	FHoudiniCurveOutputProperties CurveOutputProperty;

	UPROPERTY()
	TMap<FString, FString> CachedAttributes;

	UPROPERTY()
	TMap<FString, FString> CachedTokens;

public:
	HOUDINIENGINERUNTIME_API FHoudiniOutputObject();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniOutputObject) { return 0; }
