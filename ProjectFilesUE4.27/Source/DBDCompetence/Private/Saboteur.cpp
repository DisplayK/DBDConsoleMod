#include "Saboteur.h"

USaboteur::USaboteur()
{
	this->_cooldownDuration = 0.000000;
	this->_revealHookDistance = 0.000000;
	this->_saboteurEffect = NULL;
	this->_revealedMeatHooksOultineStrategy = TArray<UMeatHookOutlineUpdateStrategy*>();
}
