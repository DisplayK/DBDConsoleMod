#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "ESkillCheckCustomType.h"
#include "SnapOutOfIt.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USnapOutOfIt : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _postSnapOutOfItMadnessTier;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _snapOutOfItSkillCheckFailTimePenalty;

	UPROPERTY(Replicated)
	bool _isSkillCheckFailureTimerActive;

private:
	UFUNCTION()
	void Authority_OnSkillCheckResponseAuthority(bool success, bool bonus, ADBDPlayer* player, bool triggerLoudNoise, ESkillCheckCustomType type);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USnapOutOfIt();
};

FORCEINLINE uint32 GetTypeHash(const USnapOutOfIt) { return 0; }
