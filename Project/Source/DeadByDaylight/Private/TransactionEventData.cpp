#include "TransactionEventData.h"

FTransactionEventData::FTransactionEventData()
{
	this->TransactionType = TEXT("");
	this->TransactionSource = TEXT("");
	this->SourceId = TEXT("");
	this->SourceTier = 0;
	this->CurrencyType = TEXT("");
	this->CurrencyAmount = 0;
	this->CurrencyBalance = 0;
	this->LevelAchieved = 0;
	this->Prestige = 0;
	this->ItemIDAcquired = TEXT("");
	this->Rank = 0;
	this->SelectedCharacter = TEXT("");
	this->TransactionTriggeredLevelUp = false;
}
