#include "HoudiniGenericAttribute.h"

FHoudiniGenericAttribute::FHoudiniGenericAttribute()
{
	this->AttributeName = TEXT("");
	this->AttributeType = EAttribStorageType::Invalid;
	this->AttributeOwner = EAttribOwner::Invalid;
	this->AttributeCount = 0;
	this->AttributeTupleSize = 0;
	this->DoubleValues = TArray<double>();
	this->IntValues = TArray<int64>();
	this->StringValues = TArray<FString>();
}
