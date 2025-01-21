#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K28LockerCosmeticHelperActor.generated.h"

class ALocker;
class USkeletalMeshComponent;
class UMaterialHelper;

UCLASS()
class AK28LockerCosmeticHelperActor : public AActor
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnAssociatedLockerActorSet();

	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetSkeletalMesh() const;

	UFUNCTION(BlueprintPure)
	UMaterialHelper* GetMaterialHelper() const;

public:
	UFUNCTION(BlueprintPure)
	ALocker* GetLocker() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLockerGrabStateChanged(bool isLockerGrabOngoing);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnLockedStateChanged(bool isLockerLocked);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerTeleportationToLockerStart();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerTeleportationToLockerEnd();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerInsideLockerRevealed();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerExitLocker();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerEnteredLocker();

public:
	AK28LockerCosmeticHelperActor();
};

FORCEINLINE uint32 GetTypeHash(const AK28LockerCosmeticHelperActor) { return 0; }
