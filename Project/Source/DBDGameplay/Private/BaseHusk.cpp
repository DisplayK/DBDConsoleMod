#include "BaseHusk.h"
#include "Components/SkeletalMeshComponent.h"
#include "CustomizedSkeletalMesh.h"

void ABaseHusk::SetScalarParameterOnAllChildrenMeshes(FName parameterName, float value, USkeletalMeshComponent* mesh)
{

}

void ABaseHusk::SetHuskVisibility(bool visible)
{

}

void ABaseHusk::InitializeHusk(UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy)
{

}

ABaseHusk::ABaseHusk()
{
	this->_huskMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HuskMesh"));
	this->_huskCustomizedSkeletalMesh = CreateDefaultSubobject<UCustomizedSkeletalMesh>(TEXT("CustomizedSkeletalMesh"));
	this->_shouldDeactivateVFX = false;
	this->_updateWeaponAccessories = false;
	this->_shouldWeaponBeVisible = true;
}
