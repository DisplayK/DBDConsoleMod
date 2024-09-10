#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "GameplayTagContainer.h"
#include "HasObjectState.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UHasObjectState : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTag _state;

public:
	UFUNCTION(BlueprintCallable)
	void SetState(FGameplayTag state);

public:
	UHasObjectState();
};

FORCEINLINE uint32 GetTypeHash(const UHasObjectState) { return 0; }
