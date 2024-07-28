#include "CustomKillerInstinctData.h"

FCustomKillerInstinctData::FCustomKillerInstinctData()
{
	this->ParticleSystemAsset = NULL;
	this->SurvivorStateTags = TArray<FGameplayTag>();
	this->KillerStateTags = TArray<FGameplayTag>();
}
