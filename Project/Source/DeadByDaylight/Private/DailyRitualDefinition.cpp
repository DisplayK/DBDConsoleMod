#include "DailyRitualDefinition.h"

FDailyRitualDefinition::FDailyRitualDefinition()
{
	this->RitualId = TEXT("");
	this->DisplayName = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->IconPath = TEXT("");
	this->PossibleCharacters = FDailyRitualPossibleCharacters{};
	this->TrackedEvents = TArray<EDBDScoreTypes>();
	this->TrackedGameEvents = TArray<FGameplayTag>();
	this->Evaluator = NULL;
}
