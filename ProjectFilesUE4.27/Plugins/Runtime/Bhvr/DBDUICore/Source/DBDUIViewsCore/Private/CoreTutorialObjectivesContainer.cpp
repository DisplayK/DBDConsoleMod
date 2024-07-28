#include "CoreTutorialObjectivesContainer.h"

class UCoreTutorialObjectiveItem;

void UCoreTutorialObjectivesContainer::OnTutorialObjectiveCompleted(UCoreTutorialObjectiveItem* item)
{

}

UCoreTutorialObjectivesContainer::UCoreTutorialObjectivesContainer()
{
	this->CoreTutorialObjectiveItemClass = NULL;
	this->BasePooledInstanceAmount = 5;
	this->ObjectiveContainer = NULL;
	this->_objectivePool = TArray<UCoreTutorialObjectiveItem*>();
	this->_objectiveItems = TMap<FName, UCoreTutorialObjectiveItem*>();
}
