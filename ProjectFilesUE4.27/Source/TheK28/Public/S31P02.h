#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "S31P02.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class US31P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _blindnessDurationPerLevel;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _blindnessEffect;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _itemFlag;

public:
	US31P02();
};

FORCEINLINE uint32 GetTypeHash(const US31P02) { return 0; }
