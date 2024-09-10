#include "ClippedActor.h"

FClippedActor::FClippedActor()
{
	this->DisplayComponents = TArray<TWeakObjectPtr<UPrimitiveComponent>>();
	this->CollidingPrimitives = TMap<UPrimitiveComponent*, TWeakObjectPtr<UPrimitiveComponent>>();
}
