#include "DownloadMultiTextureTask.h"

class UDownloadingTextureTask;

void UDownloadMultiTextureTask::OnTextureDownloadComplete(UDownloadingTextureTask* taskCompleted)
{

}

UDownloadMultiTextureTask::UDownloadMultiTextureTask()
{
	this->_downloadingTasks = TArray<UDownloadingTextureTask*>();
	this->_downloadedTextures = TMap<FName, UTexture2DDynamic*>();
	this->_remainingTasks = 0;
}
