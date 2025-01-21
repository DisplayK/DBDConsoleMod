#pragma once

#include "CoreMinimal.h"
#include "EStatusEffectType.h"
#include "StatusEffectSlotData.generated.h"

USTRUCT(BlueprintType)
struct FStatusEffectSlotData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	FString Id;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString IconFilePath;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString DisplayName;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString Description;

	UPROPERTY(BlueprintReadOnly, Transient)
	EStatusEffectType StatusEffectType;

	UPROPERTY(BlueprintReadOnly, Transient)
	int32 Level;

public:
	DEADBYDAYLIGHT_API FStatusEffectSlotData();
};

FORCEINLINE uint32 GetTypeHash(const FStatusEffectSlotData) { return 0; }
