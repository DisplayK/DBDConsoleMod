#include "UMGTallyScoreboardWidget.h"

void UUMGTallyScoreboardWidget::HandleReportEvent(const FString& playerID)
{

}

void UUMGTallyScoreboardWidget::HandleAddFriendEvent(const FString& playerID)
{

}

UUMGTallyScoreboardWidget::UUMGTallyScoreboardWidget()
{
	this->LabelTextRank = FText::GetEmpty();
	this->LabelTextScore = FText::GetEmpty();
	this->LabelTextStatus = FText::GetEmpty();
	this->KillerWidget = NULL;
	this->FirstSurvivorWidget = NULL;
	this->SecondSurvivorWidget = NULL;
	this->ThirdSurvivorWidget = NULL;
	this->FourthSurvivorWidget = NULL;
	this->SurvivorWidgets = TArray<UUMGTallyScoreboardPlayerInfoWidget*>();
}
