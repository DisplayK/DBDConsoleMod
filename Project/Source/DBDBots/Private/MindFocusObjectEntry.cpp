#include "MindFocusObjectEntry.h"

FMindFocusObjectEntry::FMindFocusObjectEntry()
{
	this->FocusedBy = TArray<UObject*>();
	this->FocusedStartTime = 0.0f;
	this->CooldownMap = TMap<FName, float>();
}
