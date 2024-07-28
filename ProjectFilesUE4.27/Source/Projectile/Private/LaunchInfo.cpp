#include "LaunchInfo.h"

FLaunchInfo::FLaunchInfo()
{
	this->StartPosition = FVector_NetQuantize{};
	this->Direction = FVector_NetQuantizeNormal{};
	this->Speed = 0.0f;
}
