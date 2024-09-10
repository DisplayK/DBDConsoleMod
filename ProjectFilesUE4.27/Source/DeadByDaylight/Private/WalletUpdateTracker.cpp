#include "WalletUpdateTracker.h"

FWalletUpdateTracker::FWalletUpdateTracker()
{
	this->_walletChangeMap = TMap<FString, int32>();
}
