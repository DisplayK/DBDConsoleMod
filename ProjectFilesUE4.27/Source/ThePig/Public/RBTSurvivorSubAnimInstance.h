#pragma once

#include "CoreMinimal.h"
#include "SkillCheckFailureTracker.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "RBTSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class URBTSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public ISkillCheckFailureTracker
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isRemovingRBT;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasSkillCheckFailed;

public:
	UFUNCTION(BlueprintCallable)
	virtual void ResetSkillCheckFailed() override PURE_VIRTUAL(ResetSkillCheckFailed,);

protected:
	UFUNCTION()
	virtual void OnSkillCheckFailed(const FGameplayTag gameEventType, const FGameEventData& gameEventData) override PURE_VIRTUAL(OnSkillCheckFailed,);

public:
	URBTSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const URBTSurvivorSubAnimInstance) { return 0; }
