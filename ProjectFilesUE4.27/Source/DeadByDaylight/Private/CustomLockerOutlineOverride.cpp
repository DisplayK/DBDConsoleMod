#include "CustomLockerOutlineOverride.h"

FCustomLockerOutlineOverride::FCustomLockerOutlineOverride()
{
	this->Priority = 0;
	this->LockerStateTags = TArray<FGameplayTag>();
	this->PlayerStateTags = TArray<FGameplayTag>();
	this->PlayerPerkFlags = TArray<FGameplayTag>();
	this->OutlineColor = FLinearColor{};
	this->IsAlwaysVisible = false;
	this->FadeOutAsClosingIn = false;
}
