#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StalkedComponent.generated.h"

class UChargeableComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStalkedComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeingStalkedChanged, bool, isBeingStalked);

public:
	UPROPERTY(BlueprintAssignable)
	FOnBeingStalkedChanged OnBeingStalkedChanged;

private:
	UPROPERTY(VisibleAnywhere, ReplicatedUsing=OnRep_MaxStalkPoints)
	float _maxStalkPoints;

	UPROPERTY(VisibleAnywhere)
	bool _stalkableWhileSightingStalker;

	UPROPERTY(ReplicatedUsing=OnRep_IsBeingStalked)
	bool _isBeingStalked;

	UPROPERTY(Export)
	UChargeableComponent* _stalkPointsChargeable;

private:
	UFUNCTION()
	void OnRep_MaxStalkPoints();

	UFUNCTION()
	void OnRep_IsBeingStalked();

public:
	UFUNCTION(BlueprintPure)
	bool HasStalkPoints() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UStalkedComponent();
};

FORCEINLINE uint32 GetTypeHash(const UStalkedComponent) { return 0; }
