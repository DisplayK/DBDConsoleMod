#pragma once

#include "CoreMinimal.h"
#include "ESkillCheckCustomType.h"
#include "ItemAddon.h"
#include "GameplayTagContainer.h"
#include "Addon_TheBlight_SoulChemical.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_SoulChemical : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _triggerDistance;

	UPROPERTY(EditAnywhere)
	ESkillCheckCustomType _skillCheckType;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _interactionSemantics;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _blightPowerStateTag;

public:
	UAddon_TheBlight_SoulChemical();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_SoulChemical) { return 0; }
