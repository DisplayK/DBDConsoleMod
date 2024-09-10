#include "KillerProjectile.h"
#include "HitValidatorConfigurator.h"
#include "HitValidatorComponent.h"

class ASlasherPlayer;
class UPrimitiveComponent;

void AKillerProjectile::SetActiveSlashable(bool active)
{

}

UPrimitiveComponent* AKillerProjectile::GetPlayerPrimitiveComponent_Implementation() const
{
	return NULL;
}

ASlasherPlayer* AKillerProjectile::GetLaunchingKiller() const
{
	return NULL;
}

AKillerProjectile::AKillerProjectile()
{
	this->_hitValidatorConfigurator = CreateDefaultSubobject<UHitValidatorConfigurator>(TEXT("Hit Validator Configurator"));
	this->_hitValidatorComponent = CreateDefaultSubobject<UHitValidatorComponent>(TEXT("Hit Validator"));
	this->_hitValidationConfigName = EHitValidatorConfigName::Default;
}
