#include "HoudiniHandleComponent.h"

UHoudiniHandleComponent::UHoudiniHandleComponent()
{
	this->XformParms = TArray<UHoudiniHandleParameter*>();
	this->RSTParm = NULL;
	this->RotOrderParm = NULL;
	this->HandleType = EHoudiniHandleType::Xform;
	this->HandleName = TEXT("");
}
