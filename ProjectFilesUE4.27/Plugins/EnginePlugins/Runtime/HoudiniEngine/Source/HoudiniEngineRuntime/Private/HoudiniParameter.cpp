#include "HoudiniParameter.h"

UHoudiniParameter::UHoudiniParameter()
{
	this->Name = TEXT("");
	this->Label = TEXT("");
	this->ParmType = EHoudiniParameterType::Invalid;
	this->TupleSize = 0;
	this->NodeId = -1;
	this->ParmId = -1;
	this->ParentParmId = -1;
	this->ChildIndex = -1;
	this->bIsVisible = true;
	this->bIsParentFolderVisible = false;
	this->bIsDisabled = false;
	this->bHasChanged = false;
	this->bNeedsToTriggerUpdate = true;
	this->bIsDefault = false;
	this->bIsSpare = false;
	this->bJoinNext = false;
	this->bIsChildOfMultiParm = false;
	this->bIsDirectChildOfMultiParm = false;
	this->bPendingRevertToDefault = false;
	this->TuplePendingRevertToDefault = TArray<int32>();
	this->Help = TEXT("");
	this->TagCount = 0;
	this->ValueIndex = -1;
	this->bHasExpression = false;
	this->bShowExpression = false;
	this->ParamExpression = TEXT("");
	this->Tags = TMap<FString, FString>();
	this->bAutoUpdate = true;
}
