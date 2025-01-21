#include "BloodwebGenerator.h"

UBloodwebGenerator::UBloodwebGenerator()
{
	this->_selectedNodes = TArray<FString>();
	this->_selectedContent = TArray<FName>();
	this->_bloodWebDefinition = NULL;
	this->_designTunables = NULL;
	this->_bloodwebTunables = NULL;
	this->_alternativePathOccurenceFactor = 0.000000;
	this->_dataDistribution = NULL;
	this->_bloodwebSettings = NULL;
}
