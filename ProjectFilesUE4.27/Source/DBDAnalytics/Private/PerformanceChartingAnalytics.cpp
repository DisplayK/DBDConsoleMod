#include "PerformanceChartingAnalytics.h"

FPerformanceChartingAnalytics::FPerformanceChartingAnalytics()
{
	this->scenario = TEXT("");
	this->theme = TEXT("");
	this->map_name = TEXT("");
	this->tile_spawn_count = 0;
	this->seed = 0;
	this->match_id = TEXT("");
	this->character_name = TEXT("");
	this->cpu_name = TEXT("");
	this->gpu_name = TEXT("");
	this->resolution = TEXT("");
	this->graphics_quality_level = 0;
	this->hitch_times = TEXT("");
	this->target_30_fps = 0.0f;
	this->target_60_fps = 0.0f;
	this->target_120_fps = 0.0f;
	this->measured_perf_time = 0.0f;
	this->mvp = 0.0f;
	this->avg_fps = 0.0f;
	this->hitches_per_minute = 0.0f;
	this->avg_hitch = 0.0f;
	this->frame_time_avg = 0.0f;
	this->frame_time_max = 0.0f;
	this->frame_time_min = 0.0f;
	this->game_thread_avg = 0.0f;
	this->game_thread_hitches_per_min = 0.0f;
	this->game_thread_bound_frames = 0.0f;
	this->render_thread_avg = 0.0f;
	this->render_thread_hitches_per_min = 0.0f;
	this->render_thread_bound_frames = 0.0f;
	this->rhi_thread_avg = 0.0f;
	this->rhi_thread_hitches_per_min = 0.0f;
	this->rhi_thread_bound_frames = 0.0f;
	this->gpu_avg = 0.0f;
	this->gpu_hitches_per_min = 0.0f;
	this->gpu_bound_frames = 0.0f;
	this->draw_calls_avg = 0.0f;
	this->draw_calls_max = 0.0f;
	this->draw_calls_min = 0.0f;
	this->drawn_prims_avg = 0.0f;
	this->drawn_prims_max = 0.0f;
	this->drawn_prims_min = 0.0f;
	this->cpu_memory_peak = 0.0f;
	this->cpu_memory_used = 0.0f;
	this->streaming_memory_peak = 0.0f;
	this->streaming_memory_used = 0.0f;
	this->physical_memory_peak = 0.0f;
	this->physical_memory_used = 0.0f;
	this->texturegroups_guid = TEXT("");
}
