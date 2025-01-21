#include "CustomDepthOutlineRenderStrategy.h"

UCustomDepthOutlineRenderStrategy::UCustomDepthOutlineRenderStrategy()
{
	this->_replacementMaterial = NULL;
	this->_translucentCopies = TArray<UBatchMeshCommands*>();
}
