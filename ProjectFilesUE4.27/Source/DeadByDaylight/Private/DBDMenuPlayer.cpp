#include "DBDMenuPlayer.h"
#include "MaterialHelper.h"
#include "EItemHandPosition.h"
#include "Components/SkeletalMeshComponent.h"
#include "EGameFlowStep.h"
#include "CustomizedSkeletalMesh.h"

class AActor;
class UCharmSpawnerComponent;

void ADBDMenuPlayer::WrappedOnDestroyed(AActor* DestroyedActor)
{

}

bool ADBDMenuPlayer::ShouldShowSpawnAnimation() const
{
	return false;
}

bool ADBDMenuPlayer::ShouldApplyPositionOffset() const
{
	return false;
}

bool ADBDMenuPlayer::GetIsReady() const
{
	return false;
}

bool ADBDMenuPlayer::GetIsLocalPlayerCharacter() const
{
	return false;
}

EItemHandPosition ADBDMenuPlayer::GetHandPosition() const
{
	return EItemHandPosition::None;
}

EGameFlowStep ADBDMenuPlayer::GetCurrentMenu() const
{
	return EGameFlowStep::None;
}

UCharmSpawnerComponent* ADBDMenuPlayer::GetCharmSpawnerComponent_Implementation()
{
	return NULL;
}

float ADBDMenuPlayer::GetBlockRotationAfterSpawningTime() const
{
	return 0.0f;
}

void ADBDMenuPlayer::BlockCharacterRotation(bool shouldBlock)
{

}

void ADBDMenuPlayer::BeginDestroySequence_Internal_Implementation()
{

}

ADBDMenuPlayer::ADBDMenuPlayer()
{
	this->RoleSelected = false;
	this->IsOnline = false;
	this->DarkMaterial = NULL;
	this->_handPosition = EItemHandPosition::None;
	this->ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ItemMesh"));
	this->MaterialHelper = CreateDefaultSubobject<UMaterialHelper>(TEXT("MaterialHelper"));
	this->_customizedSkeletalMeshComponent = CreateDefaultSubobject<UCustomizedSkeletalMesh>(TEXT("CustomizedSkeletalMeshComponent"));
	this->_equippedItemName = NAME_None;
	this->_blockRotationDuringSpawnAnimationDuration = 0.000000;
	this->_isLocalPlayerCharacter = false;
	this->_isReady = false;
}
