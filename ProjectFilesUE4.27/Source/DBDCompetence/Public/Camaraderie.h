#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Camaraderie.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UCamaraderie : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _percentUseItem;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _pauseTimer;

	UPROPERTY(EditDefaultsOnly)
	bool _needItemToTrigger;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _camaraderieNotificationEffectClass;

private:
	UFUNCTION()
	void Authority_EnablePerk();

public:
	UCamaraderie();
};

FORCEINLINE uint32 GetTypeHash(const UCamaraderie) { return 0; }
