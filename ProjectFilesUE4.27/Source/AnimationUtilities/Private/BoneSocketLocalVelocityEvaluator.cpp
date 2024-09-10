#include "BoneSocketLocalVelocityEvaluator.h"
#include "UObject/NoExportTypes.h"

FVector UBoneSocketLocalVelocityEvaluator::GetLocalVelocity(const FName boneSocketName) const
{
	return FVector{};
}

UBoneSocketLocalVelocityEvaluator::UBoneSocketLocalVelocityEvaluator()
{
	this->_meshComponent = NULL;
	this->_trackedBoneSocketNames = TArray<FName>();
}
