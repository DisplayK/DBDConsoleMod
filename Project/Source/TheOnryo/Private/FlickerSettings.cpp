#include "FlickerSettings.h"

FFlickerSettings::FFlickerSettings()
{
	this->VisibleDuration = FDBDTunableRowHandle{};
	this->VisibileDurationAddModifiers = TArray<FGameplayTag>();
	this->InvisibleDuration = FDBDTunableRowHandle{};
	this->InvisibleDurationAddModifiers = TArray<FGameplayTag>();
	this->StartVisible = false;
}
