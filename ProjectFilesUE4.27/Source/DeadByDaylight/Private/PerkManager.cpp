#include "PerkManager.h"
#include "GameplayTagContainer.h"
#include "EGameplayModifierSource.h"
#include "Templates/SubclassOf.h"

class UPerk;
class ADBDPlayer;
class UStatusEffect;
class UGameplayModifierContainer;

bool UPerkManager::HasStatusEffectOfClass(const UClass* type) const
{
	return false;
}

bool UPerkManager::HasStatusEffect(const FName statusEffectID) const
{
	return false;
}

bool UPerkManager::HasPerkSubFlag(FGameplayTag subFlag) const
{
	return false;
}

bool UPerkManager::HasPerkModifierOfType(FGameplayTag type) const
{
	return false;
}

bool UPerkManager::HasPerkFlags(const TArray<FGameplayTag> flags) const
{
	return false;
}

bool UPerkManager::HasPerkFlagFromSource(FGameplayTag flag, EGameplayModifierSource modifierSource) const
{
	return false;
}

bool UPerkManager::HasPerkFlag(FGameplayTag flag) const
{
	return false;
}

bool UPerkManager::HasAnyEffectWithID(FName id) const
{
	return false;
}

bool UPerkManager::HasAnyAddonWithTag(FName tag) const
{
	return false;
}

bool UPerkManager::HasAllCharacterPerksEquipped() const
{
	return false;
}

UStatusEffect* UPerkManager::GetStatusEffect(FName id) const
{
	return NULL;
}

UGameplayModifierContainer* UPerkManager::GetSourceWithModifier(FGameplayTag type) const
{
	return NULL;
}

UGameplayModifierContainer* UPerkManager::GetSourceWithFlag(FGameplayTag flag) const
{
	return NULL;
}

TArray<UPerk*> UPerkManager::GetPerks() const
{
	return TArray<UPerk*>();
}

float UPerkManager::GetPerkModifierMinValueAndSource(FGameplayTag type, float startValue, UGameplayModifierContainer*& outSource) const
{
	return 0.0f;
}

float UPerkManager::GetPerkModifierMinValue(FGameplayTag type, float startValue) const
{
	return 0.0f;
}

float UPerkManager::GetPerkModifierMaxValueAndSource(FGameplayTag type, UGameplayModifierContainer*& outSource) const
{
	return 0.0f;
}

float UPerkManager::GetPerkModifierMaxValue(FGameplayTag type) const
{
	return 0.0f;
}

float UPerkManager::GetPerkModifierAdditiveValue(FGameplayTag type, const float baseValue) const
{
	return 0.0f;
}

float UPerkManager::GetPerkModifier(FGameplayTag type) const
{
	return 0.0f;
}

UPerk* UPerkManager::GetPerk(FName id) const
{
	return NULL;
}

float UPerkManager::GetMultiplicativeModifierValueWithCompoundNegative(FGameplayTag type) const
{
	return 0.0f;
}

float UPerkManager::GetMultiplicativeModifierValueOfContainerWithCompoundNegative(FGameplayTagContainer container) const
{
	return 0.0f;
}

float UPerkManager::GetMultiplicativeModifierValue(FGameplayTag type) const
{
	return 0.0f;
}

float UPerkManager::GetCompoundedModifierValue(FGameplayTag type) const
{
	return 0.0f;
}

TArray<UStatusEffect*> UPerkManager::GetAllStatusEffectsByID(const FName& id) const
{
	return TArray<UStatusEffect*>();
}

TArray<UStatusEffect*> UPerkManager::GetAllStatusEffectsByClass(const UClass* type) const
{
	return TArray<UStatusEffect*>();
}

TArray<UStatusEffect*> UPerkManager::GetAllStatusEffects() const
{
	return TArray<UStatusEffect*>();
}

TArray<UGameplayModifierContainer*> UPerkManager::GetAllSourcesWithModifier(FGameplayTag type) const
{
	return TArray<UGameplayModifierContainer*>();
}

TArray<UGameplayModifierContainer*> UPerkManager::GetAllSourcesWithFlag(FGameplayTag flag) const
{
	return TArray<UGameplayModifierContainer*>();
}

void UPerkManager::Authority_SpawnPerk(FName perkID, int32 perkLevel)
{

}

void UPerkManager::Authority_RemoveStatusEffectByID(FName statusEffectId, bool bRemoveAllWithID)
{

}

void UPerkManager::Authority_RemoveStatusEffect(UStatusEffect* statusEffect)
{

}

void UPerkManager::Authority_RemovePerks()
{

}

UStatusEffect* UPerkManager::Authority_ImposeStatusEffectOfClass(TSubclassOf<UStatusEffect> effectClass, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay, float lifetime)
{
	return NULL;
}

UStatusEffect* UPerkManager::Authority_ImposeStatusEffect_DEPRECATED(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay, float lifetime)
{
	return NULL;
}

UStatusEffect* UPerkManager::Authority_ImposeNewStatusEffectOrChangeLifeTime_DEPRECATED(FName statusEffectID, ADBDPlayer* originatingPlayer, float lifeTime, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay)
{
	return NULL;
}

UStatusEffect* UPerkManager::Authority_ImposeNewStatusEffectOfClassOrChangeLifeTime(TSubclassOf<UStatusEffect> effectClass, ADBDPlayer* originatingPlayer, float lifeTime, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay)
{
	return NULL;
}

UStatusEffect* UPerkManager::Authority_ImposeDynamicStatusEffect_DEPRECATED(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect)
{
	return NULL;
}

void UPerkManager::Authority_EndStatusEffectByID(FName statusEffectId, bool bRemoveAllWithID)
{

}

UPerkManager::UPerkManager()
{
	this->_perks = NULL;
	this->_statusEffects = NULL;
}
