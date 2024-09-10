#include "ScreenshotExportAction.h"

FScreenshotExportAction::FScreenshotExportAction()
{
	this->Enabled = false;
	this->ExportOnce = false;
	this->IncludeDLCFolder = false;
	this->Directories = TArray<FString>();
}
