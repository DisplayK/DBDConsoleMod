#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ESkillCheckType.h"
#include "Gearhead.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UGearhead : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _perkActivationDuration;

	UPROPERTY(EditDefaultsOnly)
	ESkillCheckType _skillCheckType;

	UPROPERTY(EditDefaultsOnly)
	bool _basicAttack;

public:
	UGearhead();
};

FORCEINLINE uint32 GetTypeHash(const UGearhead) { return 0; }
