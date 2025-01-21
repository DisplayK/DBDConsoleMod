#pragma once

#include "CoreMinimal.h"
#include "BaseReversibleInstantActionHandler.h"
#include "AnimationMontageDescriptor.h"
#include "SurvivorHitCosmeticHandler.generated.h"

class UNiagaraComponent;

UCLASS()
class USurvivorHitCosmeticHandler : public UBaseReversibleInstantActionHandler
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UNiagaraComponent* _bloodSpurts;

private:
	UFUNCTION()
	void OnMontageStarted(const FAnimationMontageDescriptor animMontageID, const float playRate);

public:
	USurvivorHitCosmeticHandler();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorHitCosmeticHandler) { return 0; }
