#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SurvivorCosmeticHelperActor.generated.h"

class UAkComponent;
class UCustomizedSkeletalMesh;
class ACamperPlayer;
class UMaterialHelper;

UCLASS(Abstract)
class DBDCOSMETIC_API ASurvivorCosmeticHelperActor : public AActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	bool IsLocallyObserved() const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetSurvivor() const;

	UFUNCTION(BlueprintPure)
	UMaterialHelper* GetMaterialHelper() const;

	UFUNCTION(BlueprintPure)
	UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh() const;

	UFUNCTION(BlueprintPure)
	UAkComponent* GetAudioComponent() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorLinked(ACamperPlayer* survivorLinked);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsLocallyObservingSurvivorChanged(bool isLocallyObservingSurvivor);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnIsGettingMoriedStatusChanged(bool isGettingMoried);

public:
	ASurvivorCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const ASurvivorCosmeticHelperActor) { return 0; }
