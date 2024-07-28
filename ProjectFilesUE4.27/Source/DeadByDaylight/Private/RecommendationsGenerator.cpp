#include "RecommendationsGenerator.h"

URecommendationsGenerator::URecommendationsGenerator()
{
	this->_shopManager = NULL;
	this->_gameInstance = NULL;
	this->_filters = TMap<FString, URecommendationsFilter*>();
}
