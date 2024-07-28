#include "Firecracker.h"
#include "GameplayTagContainer.h"

class ADBDPlayer;
class AActor;
class ACollectable;
class UGameplayModifierContainer;

bool AFirecracker::ShouldDeafen(const ADBDPlayer* player, float& outDuration) const
{
	return false;
}

bool AFirecracker::ShouldBlind(const ADBDPlayer* player, float& outDuration) const
{
	return false;
}

void AFirecracker::OnEffectsInitialized_Implementation()
{

}

void AFirecracker::Multicast_InitFromSpawner_Implementation(ACollectable* spawner)
{

}

bool AFirecracker::HasModifierOfType(FGameplayTag type) const
{
	return false;
}

bool AFirecracker::HasFlag(FGameplayTag flag) const
{
	return false;
}

float AFirecracker::GetModifierValue(FGameplayTag type) const
{
	return 0.0f;
}

float AFirecracker::GetExplosionRange() const
{
	return 0.0f;
}

float AFirecracker::GetExplosionEffectDuration() const
{
	return 0.0f;
}

float AFirecracker::GetExplosionDelay() const
{
	return 0.0f;
}

bool AFirecracker::GetExploded() const
{
	return false;
}

TArray<UGameplayModifierContainer*> AFirecracker::GetEffects() const
{
	return TArray<UGameplayModifierContainer*>();
}

float AFirecracker::GetDeafnessEffectDuration(const ADBDPlayer* player) const
{
	return 0.0f;
}

float AFirecracker::GetBlindnessEffectDuration(const AActor* player) const
{
	return 0.0f;
}

AFirecracker::AFirecracker()
{
	this->_effectArea = NULL;
	this->DebugDisplayEnabled = false;
	this->_effectModifiers = TArray<UGameplayModifierContainer*>();
	this->_playerOwner = NULL;
	this->_isExploding = false;
	this->_actorsInRange = TArray<AActor*>();
}
