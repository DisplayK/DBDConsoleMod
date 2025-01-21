#include "CharacterCollection.h"

class ACamperPlayer;
class ADBDPlayer;
class ASlasherPlayer;

TSet<ACamperPlayer*> UCharacterCollection::GetSurvivors() const
{
	return TSet<ACamperPlayer*>();
}

TSet<ADBDPlayer*> UCharacterCollection::GetMainDBDPlayers() const
{
	return TSet<ADBDPlayer*>();
}

ASlasherPlayer* UCharacterCollection::GetKiller() const
{
	return NULL;
}

TArray<ADBDPlayer*> UCharacterCollection::GetAllDBDPlayers() const
{
	return TArray<ADBDPlayer*>();
}

UCharacterCollection::UCharacterCollection()
{
	this->_killer = NULL;
	this->_survivors = TSet<ACamperPlayer*>();
	this->_mainDBDPlayers = TSet<ADBDPlayer*>();
	this->_otherCharacters = TSet<ADBDPlayer*>();
	this->_nonPlayableCharacters = TSet<ACharacter*>();
	this->_allCharacters = TSet<ACharacter*>();
}
