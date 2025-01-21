#include "AkLateReverbComponent.h"

class UAkAcousticTextureSetComponent;

void UAkLateReverbComponent::AssociateAkTextureSetComponent(UAkAcousticTextureSetComponent* textureSetComponent)
{

}

UAkLateReverbComponent::UAkLateReverbComponent()
{
	this->bEnable = true;
	this->SendLevel = 1.000000;
	this->FadeRate = 0.500000;
	this->Priority = 1.000000;
	this->AutoAssignAuxBus = true;
	this->AuxBus = NULL;
	this->AuxBusName = TEXT("");
	this->AuxBusManual = NULL;
}
