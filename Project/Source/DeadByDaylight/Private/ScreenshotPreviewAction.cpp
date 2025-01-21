#include "ScreenshotPreviewAction.h"

FScreenshotPreviewAction::FScreenshotPreviewAction()
{
	this->Enabled = false;
	this->RefreshBtn = FNamedButton{};
	this->Configuration = FScreenshotPreviewActionConfig{};
}
