#include "MultiSceneComponentPointProvider.h"

UMultiSceneComponentPointProvider::UMultiSceneComponentPointProvider()
{
	this->_sceneReferences = TArray<FComponentReference>();
	this->_sceneComponents = TArray<USceneComponent*>();
}
