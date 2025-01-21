#include "StencilOutlineRenderStrategy.h"

void UStencilOutlineRenderStrategy::EnableCopyStencilToCustomStencil(bool enabled)
{

}

UStencilOutlineRenderStrategy::UStencilOutlineRenderStrategy()
{
	this->_replacementMaterials = TArray<UMaterialInterface*>();
	this->_translucentCopies = TArray<UBatchMeshCommands*>();
}
