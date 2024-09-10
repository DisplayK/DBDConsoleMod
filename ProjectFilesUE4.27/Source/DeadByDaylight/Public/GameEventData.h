#pragma once

#include "CoreMinimal.h"
#include "GameEventData.generated.h"

class UObject;
class ADBDPlayer;
class AActor;

USTRUCT(BlueprintType)
struct FGameEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Transient)
	ADBDPlayer* Instigator;

	UPROPERTY(BlueprintReadWrite, Transient)
	AActor* Target;

	UPROPERTY(BlueprintReadWrite, Transient)
	float CustomValue;

	UPROPERTY(BlueprintReadWrite, Transient)
	UObject* CustomObjectParameter;

	UPROPERTY(BlueprintReadWrite, Transient)
	int32 CustomIntValue;

public:
	DEADBYDAYLIGHT_API FGameEventData();
};

FORCEINLINE uint32 GetTypeHash(const FGameEventData) { return 0; }
