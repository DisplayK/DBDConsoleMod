#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "DownedByBasicAttack.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDownedByBasicAttack : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_ReplicatedIsTrue)
	bool _replicatedIsTrue;

private:
	UFUNCTION()
	void OnRep_ReplicatedIsTrue();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDownedByBasicAttack();
};

FORCEINLINE uint32 GetTypeHash(const UDownedByBasicAttack) { return 0; }
