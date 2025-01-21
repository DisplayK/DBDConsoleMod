#pragma once

#include "CoreMinimal.h"
#include "SkillCheckFailureTracker.h"
#include "BaseSurvivorAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "PortalSurvivorSubAnimInstance.generated.h"

UCLASS(NonTransient)
class UPortalSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance, public ISkillCheckFailureTracker
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDestroyingPortal;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isSpooked;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _hasSkillCheckFailed;

public:
	UFUNCTION(BlueprintCallable)
	virtual void ResetSkillCheckFailed() override PURE_VIRTUAL(ResetSkillCheckFailed,);

protected:
	UFUNCTION()
	virtual void OnSkillCheckFailed(const FGameplayTag gameEventType, const FGameEventData& gameEventData) override PURE_VIRTUAL(OnSkillCheckFailed,);

public:
	UPortalSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UPortalSurvivorSubAnimInstance) { return 0; }
