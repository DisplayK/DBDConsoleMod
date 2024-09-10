#pragma once

#include "CoreMinimal.h"
#include "OnIsInChaseChanged.h"
#include "ChaseEndDelegate.h"
#include "AllChasesEndedDelegate.h"
#include "Components/ActorComponent.h"
#include "ChaseStartDelegate.h"
#include "TagStateBool.h"
#include "ChaseComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChaseComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FChaseStartDelegate OnChaseStarted;

	UPROPERTY(BlueprintAssignable)
	FChaseEndDelegate OnChaseEnded;

	UPROPERTY(BlueprintAssignable)
	FAllChasesEndedDelegate OnAllChaseEnded;

	UPROPERTY(BlueprintAssignable)
	FOnIsInChaseChanged OnIsInChaseChanged;

private:
	UPROPERTY(ReplicatedUsing=OnRep_IsInChase)
	FTagStateBool _isInChase;

protected:
	UFUNCTION()
	void OnRep_IsInChase();

public:
	UFUNCTION(BlueprintPure)
	bool IsInChase() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UChaseComponent();
};

FORCEINLINE uint32 GetTypeHash(const UChaseComponent) { return 0; }
