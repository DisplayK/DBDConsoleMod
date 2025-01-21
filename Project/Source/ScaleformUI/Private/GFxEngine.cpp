#include "GFxEngine.h"

UGFxEngine::UGFxEngine()
{
	this->GCReferences = TArray<FGCReference>();
	this->RefCount = 0;
}
