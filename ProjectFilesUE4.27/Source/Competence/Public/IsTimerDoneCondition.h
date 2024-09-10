#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsTimerDoneCondition.generated.h"

class UTimerObject;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UIsTimerDoneCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_Timer, Transient, Export)
	UTimerObject* _timer;

public:
	UFUNCTION(BlueprintCallable)
	void SetTimer(UTimerObject* timer);

private:
	UFUNCTION()
	void OnRep_Timer();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UIsTimerDoneCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIsTimerDoneCondition) { return 0; }
