#pragma once

#include "CoreMinimal.h"
#include "BaseModifierCondition.h"
#include "GameplayModifierCondition.generated.h"

class UGameplayModifierContainer;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGameplayModifierCondition : public UBaseModifierCondition
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetOwningGameplayModifier(UGameplayModifierContainer* OwningGameplayModifier);

	UFUNCTION(BlueprintImplementableEvent)
	void OnOwningGameplayModifierSet();

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsApplicable() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetOwningPlayer() const;

	UFUNCTION(BlueprintPure)
	UGameplayModifierContainer* GetOwningGameplayModifier() const;

public:
	UGameplayModifierCondition();
};

FORCEINLINE uint32 GetTypeHash(const UGameplayModifierCondition) { return 0; }
