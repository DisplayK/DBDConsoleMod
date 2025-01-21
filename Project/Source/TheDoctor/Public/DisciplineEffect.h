#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DisciplineEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDisciplineEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _deactivationDelay;

private:
	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _redStainInterpolating;

protected:
	UFUNCTION(BlueprintCallable)
	void SetRedStainInterpolating(bool isInterpolating);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateSurvivorRedStain(bool visible, float deltaTime);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateKillerRedStain(bool visible, float deltaTime);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SpawnRedStains();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivateSurvivorRedStain(bool activate);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_ActivateKillerRedStain(bool activate);

public:
	UDisciplineEffect();
};

FORCEINLINE uint32 GetTypeHash(const UDisciplineEffect) { return 0; }
