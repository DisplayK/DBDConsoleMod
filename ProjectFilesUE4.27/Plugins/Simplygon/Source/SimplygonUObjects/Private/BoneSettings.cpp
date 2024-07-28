#include "BoneSettings.h"

FBoneSettings::FBoneSettings()
{
	this->UseBoneReducer = false;
	this->BoneReductionTargetBoneRatioEnabled = false;
	this->RemoveUnusedBones = false;
	this->LimitBonesPerVertex = false;
	this->BoneReductionTargetBoneCountEnabled = false;
	this->BoneReductionTargetMaxDeviationEnabled = false;
	this->MaxBonePerVertex = 0;
	this->BoneReductionTargetOnScreenSizeEnabled = false;
	this->BoneReductionTargetStopCondition = EBoneReductionTargetStopCondition::Any;
	this->BoneReductionTargetBoneRatio = 0.0f;
	this->BoneReductionTargetBoneCount = 0;
	this->BoneReductionTargetMaxDeviation = 0.0f;
	this->BoneReductionTargetOnScreenSize = 0;
	this->LockBoneSelectionSetID = 0;
	this->LockBoneSelectionSetName = TEXT("");
	this->RemoveBoneSelectionSetID = 0;
	this->RemoveBoneSelectionSetName = TEXT("");
}
