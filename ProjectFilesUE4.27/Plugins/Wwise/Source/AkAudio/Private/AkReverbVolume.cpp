#include "AkReverbVolume.h"
#include "AkLateReverbComponent.h"

AAkReverbVolume::AAkReverbVolume()
{
	this->bEnabled_DEPRECATED = true;
	this->AuxBus_DEPRECATED = NULL;
	this->AuxBusName_DEPRECATED = TEXT("");
	this->SendLevel_DEPRECATED = 1.000000;
	this->FadeRate_DEPRECATED = 0.500000;
	this->Priority_DEPRECATED = 1.000000;
	this->LateReverbComponent = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
}
