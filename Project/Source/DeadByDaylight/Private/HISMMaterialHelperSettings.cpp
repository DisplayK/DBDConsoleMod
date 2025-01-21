#include "HISMMaterialHelperSettings.h"

UHISMMaterialHelperSettings::UHISMMaterialHelperSettings()
{
	this->_meshMaterialOverride = TMap<UStaticMesh*, TSoftClassPtr<UHierarchicalInstancedStaticMeshComponent>>();
}
