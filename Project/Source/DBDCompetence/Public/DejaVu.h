#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "UObject/NoExportTypes.h"
#include "DejaVu.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDejaVu : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _numGeneratorsToReveal;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _perkEffectDurations;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _actionSpeeds;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _generatorAuraColor;

	UPROPERTY(ReplicatedUsing=OnRep_RevealedGenerators, Transient)
	TArray<AGenerator*> _revealedGenerators;

private:
	UFUNCTION()
	void OnRep_RevealedGenerators();

	UFUNCTION()
	void LevelReadyToRevealOutlineGenerators();

	UFUNCTION()
	void Authority_TryActivatePerk();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDejaVu();
};

FORCEINLINE uint32 GetTypeHash(const UDejaVu) { return 0; }
