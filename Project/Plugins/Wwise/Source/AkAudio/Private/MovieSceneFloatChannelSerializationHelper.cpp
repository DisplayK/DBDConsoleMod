#include "MovieSceneFloatChannelSerializationHelper.h"

FMovieSceneFloatChannelSerializationHelper::FMovieSceneFloatChannelSerializationHelper()
{
	this->PreInfinityExtrap = RCCE_Cycle;
	this->PostInfinityExtrap = RCCE_Cycle;
	this->Times = TArray<int32>();
	this->Values = TArray<FMovieSceneFloatValueSerializationHelper>();
	this->DefaultValue = 0.0f;
	this->bHasDefaultValue = false;
}
