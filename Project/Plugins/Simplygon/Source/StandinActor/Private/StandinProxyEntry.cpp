#include "StandinProxyEntry.h"

FStandinProxyEntry::FStandinProxyEntry()
{
	this->StandinActor = NULL;
	this->StaticMesh = NULL;
	this->Material = NULL;
	this->Textures = TArray<UTexture2D*>();
	this->Key = NAME_None;
}
