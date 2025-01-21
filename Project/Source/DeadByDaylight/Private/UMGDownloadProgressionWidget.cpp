#include "UMGDownloadProgressionWidget.h"
#include "DownloadProgression.h"

void UUMGDownloadProgressionWidget::UpdateProgression(const FDownloadProgression& downloadProgression)
{

}

UUMGDownloadProgressionWidget::UUMGDownloadProgressionWidget()
{
	this->ProgressBar = NULL;
	this->DownloadPercentage = NULL;
	this->DownloadDescription = NULL;
}
