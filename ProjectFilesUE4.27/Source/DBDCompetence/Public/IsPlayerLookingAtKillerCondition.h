#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsPlayerLookingAtKillerCondition.generated.h"

class APawn;
class AController;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsPlayerLookingAtKillerCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _precisionAngleDegrees;

	UPROPERTY(ReplicatedUsing=OnRep_IsLookingTowards)
	bool _isLookingTowards;

private:
	UFUNCTION()
	void OnRep_IsLookingTowards(const bool isLookingTowards);

	UFUNCTION()
	void OnPawnControllerChanged(APawn* pawn, AController* controller);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UIsPlayerLookingAtKillerCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIsPlayerLookingAtKillerCondition) { return 0; }
