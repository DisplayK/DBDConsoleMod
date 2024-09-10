#include "SoundBankLoader.h"

USoundBankLoader::USoundBankLoader()
{
	this->_audioBanks = TArray<UAkAudioBank*>();
	this->_asyncAudioBanksPendingLoadData = TArray<ULoadAsyncBankData*>();
}
