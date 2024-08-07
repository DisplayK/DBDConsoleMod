#pragma once

#include "CoreMinimal.h"
#include "StandDisplayable.h"
#include "ECustomizationCategory.h"
#include "DBDBasePlayer.h"
#include "CharmAttachable.h"
#include "OnItemEquipped.h"
#include "UObject/SoftObjectPtr.h"
#include "EItemHandPosition.h"
#include "EGameFlowStep.h"
#include "DBDMenuPlayer.generated.h"

class AActor;
class USkeletalMeshComponent;
class UCharmSpawnerComponent;
class ADBDMenuPlayer;
class UMaterialInterface;
class UMaterialHelper;
class UCustomizedSkeletalMesh;

UCLASS()
class DEADBYDAYLIGHT_API ADBDMenuPlayer : public ADBDBasePlayer, public IStandDisplayable, public ICharmAttachable
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool RoleSelected;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool IsOnline;

	UPROPERTY(BlueprintAssignable)
	FOnItemEquipped OnItemEquipped;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UMaterialInterface> DarkMaterial;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EItemHandPosition _handPosition;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* ItemMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
	UMaterialHelper* MaterialHelper;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
	UCustomizedSkeletalMesh* _customizedSkeletalMeshComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName _equippedItemName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	float _blockRotationDuringSpawnAnimationDuration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool _isLocalPlayerCharacter;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
	bool _isReady;

public:
	UFUNCTION()
	void WrappedOnDestroyed(AActor* DestroyedActor);

public:
	UFUNCTION(BlueprintPure)
	bool ShouldShowSpawnAnimation() const;

	UFUNCTION(BlueprintPure)
	bool ShouldApplyPositionOffset() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void RestartInSequence_Internal();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnLocalPlayerSpawned();

	UFUNCTION(BlueprintImplementableEvent)
	void OnLocalPlayerReadyChanged(bool isReady);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnIsReadyChanged(bool isReady);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnGuestPlayerSpawned(ADBDMenuPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnGuestPlayerReadyChanged(ADBDMenuPlayer* player, bool isReady);

	UFUNCTION(BlueprintImplementableEvent)
	void OnCustomizationTransactionCompleted(ECustomizationCategory category);

	UFUNCTION(BlueprintImplementableEvent)
	void OnAllPlayersReadyInOnlineLobby();

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	bool IsInMenuPlayer();

	UFUNCTION(BlueprintPure)
	bool GetIsReady() const;

	UFUNCTION(BlueprintPure)
	bool GetIsLocalPlayerCharacter() const;

	UFUNCTION(BlueprintPure)
	EItemHandPosition GetHandPosition() const;

protected:
	UFUNCTION(BlueprintPure)
	EGameFlowStep GetCurrentMenu() const;

	UFUNCTION(BlueprintNativeEvent)
	UCharmSpawnerComponent* GetCharmSpawnerComponent();

public:
	UFUNCTION(BlueprintPure)
	float GetBlockRotationAfterSpawningTime() const;

	UFUNCTION(BlueprintCallable)
	void BlockCharacterRotation(bool shouldBlock);

protected:
	UFUNCTION(BlueprintNativeEvent)
	void BeginDestroySequence_Internal();

	UFUNCTION(BlueprintImplementableEvent)
	void BeginCreateSequence();

public:
	ADBDMenuPlayer();
};

FORCEINLINE uint32 GetTypeHash(const ADBDMenuPlayer) { return 0; }
