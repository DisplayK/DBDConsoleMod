#include "DecalMaskedMaterialsList.h"

UDecalMaskedMaterialsList::UDecalMaskedMaterialsList()
{
	this->decalPlaneStaticMesh = NULL;
	this->decalPlaneExtent = 0.000000;
	this->decalMaskedMaterials = TMap<FName, UMaterialInterface*>();
}
