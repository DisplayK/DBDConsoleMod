#include "GMAdaptiveShadowMapController.h"

UGMAdaptiveShadowMapController::UGMAdaptiveShadowMapController()
{
	this->_atlas = NULL;
	this->_lightFunctionMaterial = NULL;
	this->_shadowMapSourceList = TArray<UGMAdaptiveShadowMapSource*>();
	this->_shadowMapSourceActivatedList = TArray<UGMAdaptiveShadowMapSource*>();
}
