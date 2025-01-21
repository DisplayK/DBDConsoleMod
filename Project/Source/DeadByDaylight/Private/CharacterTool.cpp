#include "CharacterTool.h"

ACharacterTool::ACharacterTool()
{
	this->SpawnLocations = TArray<ATargetPoint*>();
	this->_powerSocket = TEXT("Weapon_SocketLT");
	this->_powerAttachmentRule = EAttachmentRule::KeepRelative;
	this->_muteAudioInPIE = true;
	this->_isUsingGameSkeleton = false;
	this->_overallLightingClass = NULL;
	this->_characters = TMap<ADBDMenuPlayer*, FCharacterToolSpawnParameters>();
	this->_lighting = NULL;
}
