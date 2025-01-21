#include "DisplayStand.h"

class AActor;

void ADisplayStand::OnCurrentActorDestroyed(AActor* destroyedActor)
{

}

void ADisplayStand::BlockRotation(bool shouldBlockRotation)
{

}

ADisplayStand::ADisplayStand()
{
	this->_currentActorDisplayed = NULL;
	this->_currentActorDisplayedClass = NULL;
	this->_nextActorToDisplayClass = NULL;
	this->_offsetByClass = TMap<UClass*, FTransform>();
	this->_enableRotationByClass = TMap<UClass*, bool>();
	this->_defaultCharmClassDisplayable = NULL;
	this->_useOffsetMenuAnimations = false;
	this->_displayDummyCharacter = false;
}
