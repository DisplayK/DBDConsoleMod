#include "KillerAtlantaTutorialLevel.h"

class AWindow;
class AHatch;
class AGenerator;
class ACamperPlayer;
class ASlasherPlayer;
class AEscapeDoor;

void AKillerAtlantaTutorialLevel::SetVaultWindow(AWindow* window)
{

}

void AKillerAtlantaTutorialLevel::SetHatch(AHatch* targetHatch)
{

}

void AKillerAtlantaTutorialLevel::SetGenerator(AGenerator* generator)
{

}

void AKillerAtlantaTutorialLevel::SetEscapeDoor(AEscapeDoor* targetEscapeDoor)
{

}

void AKillerAtlantaTutorialLevel::SetControlledSlasherPlayer(ASlasherPlayer* slasherPlayer)
{

}

void AKillerAtlantaTutorialLevel::SetChaseSurvivor(ACamperPlayer* camperPlayer)
{

}

void AKillerAtlantaTutorialLevel::SetBearTrapSurvivor(ACamperPlayer* camperPlayer)
{

}

void AKillerAtlantaTutorialLevel::CompleteEscapeRequirements()
{

}

AKillerAtlantaTutorialLevel::AKillerAtlantaTutorialLevel()
{
	this->LocallyControllerSlasherPlayer = NULL;
	this->ChaseCamper = NULL;
	this->BearTrapCamper = NULL;
	this->KickGenerator = NULL;
	this->VaultWindow = NULL;
	this->EscapeDoor = NULL;
	this->Hatch = NULL;
}
