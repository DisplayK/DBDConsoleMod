#include "HoudiniOutputObject.h"

FHoudiniOutputObject::FHoudiniOutputObject()
{
	this->OutputObject = NULL;
	this->OutputComponent = NULL;
	this->ProxyObject = NULL;
	this->ProxyComponent = NULL;
	this->bProxyIsCurrent = false;
	this->bIsImplicit = false;
	this->BakeName = TEXT("");
	this->CurveOutputProperty = FHoudiniCurveOutputProperties{};
	this->CachedAttributes = TMap<FString, FString>();
	this->CachedTokens = TMap<FString, FString>();
}
