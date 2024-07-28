#include "TwinJumpTargetVisibleEffect.h"
#include "UObject/NoExportTypes.h"

void UTwinJumpTargetVisibleEffect::OnJumpTargetTick(FVector location)
{

}

void UTwinJumpTargetVisibleEffect::OnHideTargetPosition()
{

}

UTwinJumpTargetVisibleEffect::UTwinJumpTargetVisibleEffect()
{
	this->_twinJumpTargetObject = NULL;
	this->_twinJumpTarget = NULL;
	this->_jumpTargetVisibility = NULL;
}
