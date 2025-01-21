#pragma once

#include "CoreMinimal.h"
#include "GeneratorTrapPerk.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "BlastMine.generated.h"

class UGeneratorBlastMinePlacerComponent;
class ABlastMineFirecracker;
class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBlastMine : public UGeneratorTrapPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGeneratorBlastMinePlacerComponent> _blastMinePlacerClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ABlastMineFirecracker> _blastMineFirecrackerClass;

	UPROPERTY(Transient)
	ABlastMineFirecracker* _blastMine;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void TrapAttachedToGenerator_Cosmetic(AGenerator* trappedGenerator);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void ThrowBubbleIndicator_Cosmetic(FTransform location);

private:
	UFUNCTION(Client, Reliable)
	void Client_TrapActivatedLoudNotification(FTransform location);

public:
	UBlastMine();
};

FORCEINLINE uint32 GetTypeHash(const UBlastMine) { return 0; }
