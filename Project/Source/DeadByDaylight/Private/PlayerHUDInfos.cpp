#include "PlayerHUDInfos.h"

FPlayerHUDInfos::FPlayerHUDInfos()
{
	this->Role = EPlayerRole::VE_None;
	this->HUDClass = NULL;
	this->TouchInterfaceName = FSoftObjectPath{};
}
