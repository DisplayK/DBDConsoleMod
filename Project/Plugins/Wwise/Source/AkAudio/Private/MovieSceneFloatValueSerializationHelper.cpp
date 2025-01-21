#include "MovieSceneFloatValueSerializationHelper.h"

FMovieSceneFloatValueSerializationHelper::FMovieSceneFloatValueSerializationHelper()
{
	this->Value = 0.0f;
	this->InterpMode = RCIM_Linear;
	this->TangentMode = RCTM_Auto;
	this->Tangent = FMovieSceneTangentDataSerializationHelper{};
}
