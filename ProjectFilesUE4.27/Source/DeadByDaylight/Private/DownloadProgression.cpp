#include "DownloadProgression.h"

FDownloadProgression::FDownloadProgression()
{
	this->DownloadSize = 0.0f;
	this->TotalDownloadedSize = 0.0f;
	this->DownloadSpeed = 0.0f;
	this->InstallProgress = 0.0f;
	this->IsDownloading = false;
	this->DownloadStatus = FText::GetEmpty();
}
