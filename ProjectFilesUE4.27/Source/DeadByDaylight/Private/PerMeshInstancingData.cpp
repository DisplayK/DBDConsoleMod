#include "PerMeshInstancingData.h"

FPerMeshInstancingData::FPerMeshInstancingData()
{
	this->gpuCulling_hashToInstancedMeshes = TMap<uint32, UInstancedStaticMeshComponent*>();
	this->gpuCullingSwap_hashToInstancedMeshes = TMap<uint32, UInstancedStaticMeshComponent*>();
	this->hism_hashToInstancedMeshes = TMap<uint32, UInstancedStaticMeshComponent*>();
}
