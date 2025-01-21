#include "LoadingTimeoutAnalytics.h"

FLoadingTimeoutAnalytics::FLoadingTimeoutAnalytics()
{
	this->match_id = TEXT("");
	this->lobby_id = TEXT("");
	this->timeout_timestamp = TEXT("");
	this->total_load_time = 0.0f;
	this->current_map_name = TEXT("");
	this->transition_id = TEXT("");
}
