#include "DBD_CrossDissolver.h"

void UDBD_CrossDissolver::MakeClone()
{

}

void UDBD_CrossDissolver::KillClone()
{

}

UDBD_CrossDissolver::UDBD_CrossDissolver()
{
	this->NewMaterials = TArray<UMaterialInterface*>();
	this->BaseSkeletalMesh = TArray<USkeletalMeshComponent*>();
	this->ClonedSkeletalMeshes = TArray<USkeletalMeshComponent*>();
}
