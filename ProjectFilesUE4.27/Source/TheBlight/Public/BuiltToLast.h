#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "BuiltToLast.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UBuiltToLast : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _refillPercentage;

	UPROPERTY(EditDefaultsOnly)
	float _hideDuration;

private:
	UPROPERTY(Replicated, Transient)
	uint8 _numberOfTimesPerkTriggered;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnBuiltToLastTrigger_Cosmetic();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBuiltToLast();
};

FORCEINLINE uint32 GetTypeHash(const UBuiltToLast) { return 0; }
