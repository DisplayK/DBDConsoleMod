#pragma once

#include "CoreMinimal.h"
#include "EDoctorAbilityType.h"
#include "Components/ActorComponent.h"
#include "EDoctorAbilityPhase.h"
#include "DoctorPowerAnimStateComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDoctorPowerAnimStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	EDoctorAbilityType _abilityType;

	UPROPERTY(BlueprintReadOnly)
	EDoctorAbilityPhase _abilityPhase;

public:
	UFUNCTION(BlueprintCallable)
	void SetCurrentAbilityType(EDoctorAbilityType abilityType);

	UFUNCTION(BlueprintCallable)
	void SetCurrentAbilityPhase(EDoctorAbilityPhase abilityPhase);

public:
	UDoctorPowerAnimStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDoctorPowerAnimStateComponent) { return 0; }
