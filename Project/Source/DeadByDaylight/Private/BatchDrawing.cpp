#include "BatchDrawing.h"

UBatchDrawing::UBatchDrawing()
{
	this->_actorToSpawnInstancesInto = NULL;
	this->_meshesToInstancingData = TMap<UStaticMesh*, FPerMeshInstancingData>();
	this->_hismMaterialHelperSettings = NULL;
	this->_currentWorld = NULL;
	this->_meshAutoBatch = TArray<FStaticMeshAutoBatch>();
}
