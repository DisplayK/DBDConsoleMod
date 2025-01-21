#include "StatusEffectInitializationData.h"

FStatusEffectInitializationData::FStatusEffectInitializationData()
{
	this->OriginatingPlayer = NULL;
	this->HasOriginatingPlayer = false;
	this->OriginatingEffect = NULL;
	this->HasOriginatingEffect = false;
	this->StatusEffectType = EStatusEffectType::None;
	this->CustomParam = 0.0f;
	this->InitializationLifeTime = 0.0f;
	this->AuthorityDataSet = false;
}
