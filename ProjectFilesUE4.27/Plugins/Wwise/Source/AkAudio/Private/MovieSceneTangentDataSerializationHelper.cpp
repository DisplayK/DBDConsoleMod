#include "MovieSceneTangentDataSerializationHelper.h"

FMovieSceneTangentDataSerializationHelper::FMovieSceneTangentDataSerializationHelper()
{
	this->ArriveTangent = 0.0f;
	this->LeaveTangent = 0.0f;
	this->TangentWeightMode = RCTWM_WeightedNone;
	this->ArriveTangentWeight = 0.0f;
	this->LeaveTangentWeight = 0.0f;
}
