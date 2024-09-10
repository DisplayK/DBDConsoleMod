#include "StadiaStreamAnalytics.h"

FStadiaStreamAnalytics::FStadiaStreamAnalytics()
{
	this->MatchId = TEXT("");
	this->DynamicRange = TEXT("");
	this->PixelDensity = TEXT("");
	this->RenderResolution = TEXT("");
	this->NetworkDelayForInputTime = 0.0f;
	this->NetworkDelayForVideoTime = 0.0f;
	this->PercentFramesAbove60FPS = 0.0f;
	this->PercentFramesBelow60FPS = 0.0f;
	this->PercentFramesBelow45FPS = 0.0f;
	this->PercentFramesBelow30FPS = 0.0f;
	this->PercentFramesBelow20FPS = 0.0f;
}
