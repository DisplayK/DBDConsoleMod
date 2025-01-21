#pragma once

#include "CoreMinimal.h"
#include "StruggleSkillCheck.h"
#include "Components/ActorComponent.h"
#include "ESkillCheckCustomType.h"
#include "StruggleComponent.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UStruggleComponent : public UActorComponent, public IStruggleSkillCheck
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	int32 _skillCheckCount;

private:
	UFUNCTION()
	void OnSkillCheckEnd(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player);

	UFUNCTION()
	void Authority_TryActivateSkillCheck();

public:
	UStruggleComponent();
};

FORCEINLINE uint32 GetTypeHash(const UStruggleComponent) { return 0; }
