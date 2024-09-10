#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "IllusionaryDoctorEffect.generated.h"

class AIllusionaryDoctor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UIllusionaryDoctorEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AIllusionaryDoctor> _illusionaryDoctorClass;

	UPROPERTY()
	AIllusionaryDoctor* _illusionaryDoctor;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _madness2IllusionaryDoctorIntervalMinimum;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _madness2IllusionaryDoctorIntervalMaximum;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _madness3IllusionaryDoctorIntervalMinimum;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _madness3IllusionaryDoctorIntervalMaximum;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _illusionaryDoctorFrontalDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _illusionaryDoctorRadialVarianceMaximum;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _illusionaryDoctorApparitionDuration;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StartIllusionaryDoctorAppearSequence(const FTransform& illusionaryDoctorTransform);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_DebugDisplayInfo(const float timeRemainingBeforeActivation, const FColor& messageColor);

public:
	UIllusionaryDoctorEffect();
};

FORCEINLINE uint32 GetTypeHash(const UIllusionaryDoctorEffect) { return 0; }
