#include "PlayerHitCosmeticParams.h"

FPlayerHitCosmeticParams::FPlayerHitCosmeticParams()
{
	this->Attacker = NULL;
	this->Target = NULL;
	this->AttackType = EAttackType::VE_None;
	this->CausedKO = false;
	this->IsWeaponHit = false;
}
