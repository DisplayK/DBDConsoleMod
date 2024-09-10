#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStatusEffectType.h"
#include "InteractionProficiency.generated.h"

class ADBDPlayer;
class UChargeableInteractionDefinition;

UCLASS(Blueprintable)
class UInteractionProficiency : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FString> InteractionIDs;

protected:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	float GetValue(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	EStatusEffectType GetType(const float value) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	int32 GetLevel(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool GetIsActive(const UChargeableInteractionDefinition* chargeableInteraction, const ADBDPlayer* player) const;

public:
	UInteractionProficiency();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionProficiency) { return 0; }
