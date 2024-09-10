#include "ChartAggregatorSettings.h"

FChartAggregatorSettings::FChartAggregatorSettings()
{
	this->ChartAggregatorMode = EChartAggregatorMode::TextureSizeProportions;
	this->SurfaceAreaScale = ESurfaceAreaScale::LargestInstance;
	this->OriginalTexCoordLevel = 0;
	this->OriginalTexCoordName = TEXT("");
	this->SeparateOverlappingCharts = false;
	this->OriginalChartProportionsChannel = TEXT("");
	this->LockUVRotation = false;
}
