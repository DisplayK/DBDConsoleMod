#include "ASDisplayInfo.h"

FASDisplayInfo::FASDisplayInfo()
{
	this->Position = FVector{};
	this->Scale = FVector{};
	this->Rotation = 0.0f;
	this->XRotation = 0.0f;
	this->YRotation = 0.0f;
	this->Alpha = 0.0f;
	this->Visible = false;
}
