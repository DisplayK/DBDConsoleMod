#include "LoadingStepAnalytics.h"

FLoadingStepAnalytics::FLoadingStepAnalytics()
{
	this->match_id = TEXT("");
	this->lobby_id = TEXT("");
	this->step_change_timestamp = TEXT("");
	this->loading_step = TEXT("");
	this->time_on_prev_step = 0.0f;
	this->total_load_time = 0.0f;
	this->current_map_name = TEXT("");
	this->transition_id = TEXT("");
}
