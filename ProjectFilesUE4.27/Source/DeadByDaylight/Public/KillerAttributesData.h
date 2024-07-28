#pragma once

#include "CoreMinimal.h"
#include "EKillerHeight.h"
#include "KillerAttributesData.generated.h"

USTRUCT(BlueprintType)
struct FKillerAttributesData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	float Speed;

	UPROPERTY(BlueprintReadOnly, Transient)
	float TerrorRadius;

	UPROPERTY(BlueprintReadOnly, Transient)
	EKillerHeight Height;

public:
	DEADBYDAYLIGHT_API FKillerAttributesData();
};

FORCEINLINE uint32 GetTypeHash(const FKillerAttributesData) { return 0; }
