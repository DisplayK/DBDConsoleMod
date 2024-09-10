#include "FrameTravelTimeAnalytics.h"

FFrameTravelTimeAnalytics::FFrameTravelTimeAnalytics()
{
	this->MatchId = TEXT("");
	this->DynamicRange = TEXT("");
	this->PixelDensity = TEXT("");
	this->RenderResolution = TEXT("");
	this->FrameIssuedToClientArrivalTotalTime = 0.0f;
	this->FrameIssuedToBeginRenderingTime = 0.0f;
	this->FrameRenderingTime = 0.0f;
	this->FrameEncodingTime = 0.0f;
	this->FrameFinishedEncodingToClientArrivalTime = 0.0f;
}
