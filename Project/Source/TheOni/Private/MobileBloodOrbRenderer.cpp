#include "MobileBloodOrbRenderer.h"

AMobileBloodOrbRenderer::AMobileBloodOrbRenderer()
{
	this->OrbMaterialInstance = NULL;
	this->OutlineMaterialInstance = NULL;
	this->CullInterval = 25.000000;
	this->_ismComponent = NULL;
	this->_outlineIsmComponent = NULL;
	this->_instanceMap = TMap<ABloodOrb*, FBloodOrbInfo>();
	this->_outlineMaterialInstanceDynamic = NULL;
	this->_orbMaterialInstanceDynamic = NULL;
	this->_bloodOrbVisibilityComponent = NULL;
}
