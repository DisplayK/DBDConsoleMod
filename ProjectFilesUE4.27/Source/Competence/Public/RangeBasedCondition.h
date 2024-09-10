#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "RangeBasedCondition.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API URangeBasedCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_Range, Transient)
	float _range;

public:
	UFUNCTION(BlueprintCallable)
	void SetRange(float range);

private:
	UFUNCTION()
	void OnRep_Range();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	URangeBasedCondition();
};

FORCEINLINE uint32 GetTypeHash(const URangeBasedCondition) { return 0; }
