#include "GameConsoleLogAnalytics.h"

FGameConsoleLogAnalytics::FGameConsoleLogAnalytics()
{
	this->Verbosity = TEXT("");
	this->Category = TEXT("");
	this->FrameCounter = 0;
	this->Message = TEXT("");
	this->StackTrace = TEXT("");
}
